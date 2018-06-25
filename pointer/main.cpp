#include <QCoreApplication>
#include <QDebug>


class A {
public:
    A(){}

    void speak() {
        qDebug() << "class speak" << this->value;
    }

    void setValue(int value) {
        this->value = value;
    }

private:
    int value;

};


int main(int argc, char *argv[])
{
    A *a = new A();
    a->setValue(100);
    a->speak();

    int array[1];
    A *b = (A*)array;
    b->setValue(200);
    b->speak();

    qDebug() << array[0];
}
