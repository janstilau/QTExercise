#include <QCoreApplication>
#include <QDebug>

class MyStirng
{
public:
    MyStirng(char *data):mData(nullptr) {
        if (!data) { return;}
        mData = new char[strlen(data) + 1];
        strcpy(mData, data);
    }
    MyStirng  &operator=(const MyStirng& value)  {
        if (this == &value) { return *this; }
        if (mData) {delete []mData;}
        mData = new char[strlen(value.mData) + 1];
        strcpy(mData, value.mData);
        return *this;
    }

public:
    char *mData;
};


int main(int argc, char *argv[])
{

    synchronizesd();
}
