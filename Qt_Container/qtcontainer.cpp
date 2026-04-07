#include "qtcontainer.h"
#include <QList>
#include <QDebug>

QtContainer::QtContainer(QWidget *parent)
    : QWidget{parent}
{
    test();
}

void QtContainer::test()
{
    testQList();
}

void QtContainer::testQList()
{
    QList<int> list1, list2;
    list1 << 1 << 2 << 3;
    list2 << 5 << 6 << 7;
    list2.append(8);
    list1.append(list2);
    list1.insert(3, 4);

    qDebug() << "List Size:" << list1.size();
    qDebug() << "Element at 3:" << list1.at(3);

    QDebug debug = qDebug().nospace();
    debug << "Before Delete:";
    for (int i : qAsConst(list1))
    {
        debug << i << " ";
    }
    debug << Qt::endl;

    debug << "After Delete:";
    list1.removeAt(0);
    for (int i : qAsConst(list1))
    {
        debug << i << " ";
    }
    debug << Qt::endl;
}
