//license-placeholder 2018-4-20 JustinLau
#include "outlib.h"
#include <QDebug>
#include <QLabel>


OuputLib::OuputLib()
{
}

void OuputLib::log()
{
    qDebug() << "loging....";
}

void OuputLib::showLabel()
{
    QLabel *label = new QLabel();
    QPixmap image(":/output/images/Snip20170903_2.png");
    label->setPixmap(image);
    label->show();
}
