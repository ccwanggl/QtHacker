#include "qobjecttest.h"
#include <QDebug>

QObjectTest::QObjectTest(QObject *parent) : QObject(parent)
{

}

void QObjectTest::dostuff()
{
    qInfo()  << "Do stuff";
    emit close();
}


