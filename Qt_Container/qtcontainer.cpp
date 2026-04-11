#include "qtcontainer.h"

QtContainer::QtContainer(QObject *parent)
    : QObject{parent}
{}

void QtContainer::test()
{
    list.testQList();
    list.practiceQList();
}

