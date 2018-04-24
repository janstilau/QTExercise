# 公共组件管理项目

<!--markdownlint-->

## 公共组件项目的作用

多个项目同时用到了相同的第三方库, 团队抽取的功能库. 每个项目同时包含相同的代码, 增加了每个项目的编译时间, 同时, 功能库代码的修改会占用大量的时间在各个使用项目中同步. 现在用一个项目将所用的库文件进行管理, 生成可以供不同项目使用的一份静态库文件. 这样做的目的在于:
<!-- 上述内容和下面的1.2.3重复-->

1. 减少各个使用项目的编译链接时间
1. 减少库文件修改后导致了效率低的代码同步工作
1. 规范开发流程, 谨慎修改公共库, 防止因为临时业务需求随意更改公共组件代码的事情发生.

## 公共组件项目的文件目录结构

<!-- 分成总体结构，无源码lib和有源码lib三种情况 -->

```qmake
/hToolCommon
/hToolCommon/common.pri
/hToolCommon/hToolCommon.pro
/hToolCommon/OPENGL32 (第三方没有源代码静态库)
/hToolCommon/OPENGL32/OPENGL32.pri
... (其他第三方没有源代码的库)
/hToolCommon/quazip (一个压缩功能库, 可以获取到源代码)
/hToolCommon/quazip/quazip.pri
/hToolCommon/quazip/quazip.pro
/hToolCommon/quazip/quazip各源代码文件
... (其他带有源代码的库)
/hToolCommon/libs (各二进制静态库存放目录)
/hToolCommon/libs/OPENGL32
/hToolCommon/libs/OPENGL32/OPENGL32.lib
... (其他没有源代码的静态库二进制文件)
/hToolCommon/libs/quazip
/hToolCommon/libs/quazip/quazip_d.lib (quazip功能库OS_win的debug版本)
/hToolCommon/libs/quazip/quazip_r.lib (quazip功能库OS_win的release版本)
/hToolCommon/libs/quazip/libquazip_d.a (quazip功能库OS_mac的debug版本)
/hToolCommon/libs/quazip/libquazip_r.a (quazip功能库OS_mac的release版本)
... (其他代码源代码的库生成的二进制库文件)
```

## 公共组件项目详解

### 项目的组织方式

hToolCommon是一个由多个子项目组成的综合项目, hToolCommon.pro文件中`TEMPLATE  = subdirs`, 而各个子项目均为可以获取源代码的库工程. 在/hToolCommon/libs中, 存放最终生成的所有二进制静态库文件. 对于第三方没有源代码静态库, 需人工拷贝对应的静态库文件到libs下. 在hToolCommon项目运行之后, 各个子项目会根据win/mac, debug/release的不同生成对应名称的二进制静态库, 并存放到libs目录. 而使用到公共库的工程需链接/hToolCommon/libs下对应的库文件, 最终生成完整的可运行文件.

### 子项目的组织方式

子项目为可以获取源代码的库工程, 项目目录下存放pri文件, pro文件, 以及各个库的源码文件. 对于源码文件, 只要在pro, pri中填写了对应的路径, 可以有多级目录. pri文件, pro文件必须同级, 并且直接放到库所在的子工程目录中.

### 项目的使用方式

首先, 应该在mac, win系统下, 以debug, release模式运行下公共组件项目, 确保/hToolCommon/libs目录下拥有完整的静态库数据.
在使用时, 使用库的项目和公共组件项目应该处于同一目录下. 修改使用库的项目的pro文件, 将所需要库的pri文件include到pro文件中.

以hScene项目为例, 该工程引用到了qtpropertybrowser, quazip, OPENGL32.lib, GLU32.lib等库文件.
两个项目的路径为:

```sh
/Users/username/Project/hScene
/Users/username/Project/hToolCommon
```

保持hScene项目和hToolCommon处于同一目录下, 以确保hScene项目可以根据相对位置找到所需的文件.
而在在hScene的pro文件中, 添加如下信息

```qmake
include($$_PRO_FILE_PWD_/../hToolCommon/qtpropertybrowser/qtpropertybrowser.pri)
include($$_PRO_FILE_PWD_/../hToolCommon/quazip/quazip.pri)
include($$_PRO_FILE_PWD_/../hToolCommon/OPENGL32/OPENGL32.pri)
include($$_PRO_FILE_PWD_/../hToolCommon/GLU32/GLU32.pri)
```

将各个所使用的二进制库对应的pri文件include到pro文件中. 各个库如何配置, 连接, 记录在各个库的pri文件中.

### 项目产生的二进制库命名规则

<!--如果没有必要，保持现有的模式-->
win: debug版本以_d为后缀, release版本以_r为后缀, 两个文件以lib作为扩展名
mac: debug版本以_d为后缀, release版本以_r为后缀, 两个文件以a作为扩展名
所以, 以quazip为例, 最终/hToolCommon/libs/quazip目录下应该有quazip_d.lib, quazip_r.lib, quazip_d.a, quazip_r.a 四个二进制文件.

### 项目各个文件功能详解

#### 自定义变量名, 函数名命名规则

系统变量全部大写下划线连接, 例如LIBS, PRE_TARGETDEPS;
系统函数为小写下划线连接, 例如absolute_path(), basename()
现规定, 自定义函数, 变量以全部首字母大写的驼峰式书写形式, 变量函数用后方是否添加小括号区分
GetSchoolName(), GetSchoolName为函数名, SchoolName为变量名.
<!-- 私有函数用下划线开头-->

#### hToolCommon/common.pri

该文件下存放经常使用的公共函数

<!-- 变量命名-->

```qmake
!CONFIG(hToolCommonFunctionDefined) { // 由于pri没有防止多次包含功能, 用条件判断模拟该功能
    defineReplace(Lib_Declare) { <!-- 这里不是声明lib，而是include lib或者use lib -->
        libname = $$1
        libpath = $${PWD}/../libs/$${libname}
        !exists($$libpath): error ("Not existing $$libname")

        win32:CONFIG(release, debug|release): LIBS += $${libpath}$${libname}_r.lib
        else:win32:CONFIG(debug, debug|release): LIBS += $${libpath}/$${libname}_d.lib
        else:macx:CONFIG(release, debug|release) LIBS += $${libpath}/lib$${libname}_r.a
        else:macx:CONFIG(debug, debug|release) LIBS += $${libpath}/lib$${libname}_d.a
        <!-- 这里清晰一点比效率重要-->
        win32 {
            CONFIG(release, debug|release): LIBS += $${libpath}$${libname}_r.lib
            CONFIG(debug, debug|release): LIBS += $${libpath}/$${libname}_d.lib
        }
        macx {
            ...
        }

        <!-- 路径校验应该在这里 -->

        export(LIBS)

        return($$1)
    }
    <!-- add -->
    defineReplace(AddLib) {
        include(....pri)
    }
}
CONFIG *= hToolCommonFunctionDefined
```

#### 各个库目录下的同名pri文件

库的pri文件描述着各个库在被使用时, 应该如何将自己的信息添加到使用工程的pro文件中.
共有的信息有:

1. include($$PWD/../common.pri), 将公共函数定义包含到当前文件 <!-- 可以约定包含这个放在pro文件 -->
1. INCLUDEPATH += ??? , 为使用库的工程添加包含路径. 没有源代码的库可以填空或者不写该信息.
1. DEPENDPATH += ??? , 为使用库的工程添加依赖路径. 没有源代码的库可以填空或者不写该信息. <!-- 共有的只有includepath -->
1. DEFINES += ???, 为使用库的工程添加宏定义, 这些宏定义在库的源文件中使用.
1. HEADERS += ???, 为使用库的工程添加头文件信息.

不同库子项目独有的信息:

1. 如果在添加库的过程中, 发现库原有信息中有根据环境专门做了配置, 酌情复制到pri文件中.
1. 对于可以拿到源代码的静态库, 可以使用common.pri中定义的Lib_Declare函数, 在该函数里, 会根据win/mac系统信息, debug/release版本信息设置LIBS连接到合适名称的静态库文件.
1. 对于不能拿到源代码的第三方静态库, 在各自的pri文件中单独添加配置信息.

<!-- 尽量使用 PWD 代替 _PRO_FILE_PWD_ -->

<!--函数-->

```qmake
win32 {
    LIB_OPENGL32="$$_PRO_FILE_PWD_\libs\OPENGL32.lib"
    !exists($$LIB_OPENGL32): error ("Not existing $$LIB_OPENGL32")
    LIBS+= $$LIB_OPENGL32
}
```

上述代码就添加OPENGL32的代码, 单独放到OPENGL32.pri.

#### 各个库目录下的同名pro文件

pro文件, 控制库的源代码生成二进制库文件, 需要修改的点主要有

1. 添加库所用到的宏定义.
    例如quazip项目中,DEFINES += QUAZIP_BUILD
1. 修改DESTDIR变量到$${_PRO_FILE_PWD_}/../libs/$${TARGET}, 将生成的库存放到工程文件的libs目录下.
1. 最后根据debug/release版本信息, 为TARGET变量添加_d, 或者_r后缀, 确保libs目录下生成的静态库文件拥有合适的后缀.
