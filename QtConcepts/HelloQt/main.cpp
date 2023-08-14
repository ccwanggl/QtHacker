#include <QCoreApplication>
#include <iostream>
#include <string>

#include <QDebug>
#include <QTextStream>

void do_cpp()
{
    std::string name{};
    std::cout << "Please input your name: " << std::endl;
    std::getline(std::cin, name);
    std::cout << "Hello " << name << std::endl;
}

void do_qt()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);

    qout << "Please input your name: ";
    qout.flush();

    QString name = qin.readLine();

    qout << "Hello " << name;
    qout.flush();
}

// Best way

void do_mixed()
{
    QTextStream qin(stdin);
    qInfo() << "Please input your name: ";
    QString name = qin.readLine();
    qInfo() << "Hello " << name;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    // do_cpp();
    // do_qt();
    do_mixed();

    return a.exec();
}
