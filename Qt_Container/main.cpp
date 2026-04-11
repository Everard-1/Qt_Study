#include "qtcontainer.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QtContainer q;
    q.test();
    return a.exec();
}
