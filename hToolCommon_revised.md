# 公共组件管理项目

## 公共组件项目的作用

多个项目同时用到了相同的第三方库, 团队抽取的功能库. 现在用一个项目将所用的库文件进行管理, 生成可以供不同项目使用的一份静态库文件. 这样做的目的在于:

1. 减少各个使用项目的编译链接时间
2. 减少库文件修改后导致了效率低的代码同步工作
3. 规范开发流程, 谨慎修改公共库, 防止因为临时业务需求随意更改公共组件代码的事情发生.

## 项目的组织方式

现在hToolCommon管理的库. 现分为两种情况:

* 没有源代码的库
* 获取到源代码, 可以通过源代码生成二进制库文件的库

### 项目的总体设计思路为

每一个所管理的库, 在该项目目录下都有着一个和自己库名相同的目录, 在该库名目录下, 会有一份pri文件, 作为描述这个库应该如何添加到库使用项目的头文件, 该文件需要根据各个库的信息, 单独进行配置. 库使用项目在pro文件中, 仅仅通过include每个库的pri文件, 就可以实现库的配置.

而所有的库对应的二进制文件, 统一放在libs目录下. 对于没有源代码只有二进制文件的库, 提前将二进制文件拷贝到libs目录下, 而有源代码的库, 则是在项目运行之后, 生成二进制库文件, 然后自动放到libs目录下.

### 项目的文件结构如下

```qmake
/hToolCommon
/hToolCommon/common.pri
/hToolCommon/hToolCommon.pro
/hToolCommon/OPENGL32 (没有源代码的静态库)
... (其他第三方没有源代码的库)
/hToolCommon/quazip (可以获取到源代码的静态库)
... (其他带有源代码的库)
/hToolCommon/libs (存放所有的二进制库文件)
```

### 无源代码lib的结构

无源代码的lib并不是hToolCommon工程的子项目, 它的目录下, 仅仅有一个pri文件.
以OPENGL32为例, 它的文件目录结构为

```qmake
/hToolCommon/OPENGL32
/hToolCommon/OPENGL32/OPENGL32.pri
```

### 有源代码lib的结构

有源代码的lib, 是作为hToolCommon的子项目添加到工程中的, 它的目录下, 有着子项目pro文件, 子项目所需要的源代码和资源, 以及一个pri文件.
以quazip为例, 它的目录结构为

```qmake
/hToolCommon/quazip
/hToolCommon/quazip/quazip.pri
/hToolCommon/quazip/quazip.pro
/hToolCommon/quazip/quazip各源代码文件
```

作为hToolCommon的子项目, 有源代码的lib会参与到项目运行时候的编译链接过程, 并生成对应的二进制库文件.

## 项目关键文件详解

### hToolCommon/common.pri

该文件下存放经常使用的公共函数, 库使用项目应首先将common.pri文件include到自己的pro文件中.

* 自定义变量名, 函数名命名规则

系统变量全部大写下划线连接, 例如LIBS, PRE_TARGETDEPS;
系统函数为小写下划线连接, 例如absolute_path(), basename().

现规定, 自定义函数, 变量以全部首字母大写的驼峰式书写形式, 变量函数用后方是否添加小括号区分
GetSchoolName(), GetSchoolName为函数名, SchoolName为变量名.
私有函数, 则在函数名之前添加下划线前缀, \_GetHighSchoolName, 其中\_GetHighSchoolName作为私有函数, 应该仅仅在hToolCommon中使用.

* 有源代码的lib生成二进制库文件的命名规则

在win下, 生成的二进制文件以.lib作为扩展名, 在mac下, 则是以.a作为扩展名, 并且系统会自动添加lib前缀.

现规定, release模式下的库以库名为二进制文件名, 而debug模式下的库, 在库名后面添加-debug为后缀.

所以一个有源代码名为quazip的lib, 最终会有四个二进制文件

```qmake
quazip.lib         (win_release)
quazip-debug.lib   (win_debug)
libquazip.a        (mac_release)
libquazip-debug.a  (mac_debug)
```

* common.pri的内容

```qmake
defineReplace(UseLib) {
    LibName = $$1
    LibDir = $${PWD}/../libs/$${LibName}

    win32 {
        CONFIG(release, debug|release): LibPath = $${LibDir}/$${LibName}.lib
        CONFIG(debug, debug|release): LibPath = $${LibDir}/$${LibName}-debug.lib
    }
    macx {
        CONFIG(release, debug|release): LibPath = $${LibDir}/lib$${LibName}.a
        CONFIG(debug, debug|release): LibPath = $${LibDir}/lib$${LibName}-debug.a
    }

    !exists($$LibPath): error ("Not existing $$LibPath")
    LIBS += LibPath

    export(LIBS)
    return($$1)
}

defineReplace(LibPriPath) {
    LibName = $$1
    PriPath = $${PWD}/../LibName/$${LibName}.pri
    !exists($$PriPath): error ("Not existing $$PriPath")
    return($$PriPath)
}
```

### 各个库目录下同名pri文件

库的pri文件描述着各个库在被使用时, 应该如何将自己的信息添加到使用工程的pro文件中.
每个库目录下必须有一份同名pri文件, 否则使用库的项目无法正确的配置链接信息.

* 共有的内容

1. INCLUDEPATH += ???, 为使用库的工程添加包含路径
2. DEPENDPATH += ???, 为使用库的工程添加依赖路径

* 各个库单独配置内容

1. DEFINES += ???, 各个库使用了不同的宏定义, 在各自的pri文件中写明
2. HEADERS += ???, 各个库需要暴露给库使用工程的头文件各不相同, 在各自的pri文件中写明
3. 各个库的原有配置信息中, 可能会有根据环境做的专门配置, 酌情赋值到pri文件中
4. 可以拿到源代码的库, 可以使用common.pri中定义的UseLib函数, 传入库名, 该函数会根据运行时的环境正确的添加LIBS信息
5. 不能拿到源代码的库, 在各自的pri文件中单独添加配置信息.例如

```qmake
win32 {
    LIB_OPENGL32="$$PWD\..\libs\OPENGL32.lib"
    !exists($$LIB_OPENGL32): error ("Not existing $$LIB_OPENGL32")
    LIBS+= $$LIB_OPENGL32
}
```

### 带有源代码的库目录下pro文件

pro文件, 控制库的源代码生成二进制库文件, 需要修改的点主要有

1. 修改DESTDIR变量到`$${PWD}/../libs/$${TARGET}`, 将生成的库存放到工程文件的libs目录下.
2. 如果是debug版本, 为TARGET变量添加-debug后缀, 确保libs目录下生成的静态库文件拥有合适的文件名.
3. 添加库所用到的宏定义.

    例如quazip项目中,DEFINES += QUAZIP_BUILD

## 如何使用hToolCommon项目

首先, 应该在mac, win系统下, 以debug, release模式运行下hToolCommon项目, 确保libs目录下拥有完整的静态库数据.

在使用时, 使用库的项目和公共组件项目应该处于同一目录下. 修改使用库的项目的pro文件, 将所需要库的pri文件include到pro文件中.

以hScene项目为例, 该工程引用到了qtpropertybrowser, quazip, OPENGL32.lib, GLU32.lib等库文件.

两个项目的路径为:

```qmake
/Users/username/Project/hScene
/Users/username/Project/hToolCommon
```

而在在hScene的pro文件中, 添加如下信息

```qmake
include($$PWD/../hToolCommon/common.pri)
include($$LibPriPath(qtpropertybrowser))
include($$LibPriPath(quazip))
include($$LibPriPath(OPENGL32))
include($$LibPriPath(GLU32))
```

将各个所使用的二进制库对应的pri文件include到pro文件中. 各个库如何配置, 连接, 记录在各个库的pri文件中.