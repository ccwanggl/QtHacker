#include <QCoreApplication>

#include "qobjecttest.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QObjectTest test;

    // Connect the signal and the slot
    QObject::connect(&test, &QObjectTest::close, &a, &QCoreApplication::quit, Qt::QueuedConnection);
    test.dostuff();

    return a.exec();
}
