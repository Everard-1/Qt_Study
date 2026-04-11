#include "qtcontainer.h"

QtContainer::QtContainer(QObject *parent)
    : QObject{parent}
{}

void QtContainer::test()
{
    // QList基本使用
    // list.testQList();
    // list.practiceQList();

    // QVector基本使用
    vector.testQVector();
}

