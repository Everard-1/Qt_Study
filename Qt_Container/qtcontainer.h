#ifndef QTCONTAINER_H
#define QTCONTAINER_H

#include <QObject>
#include "list.h"

class QtContainer : public QObject
{
    Q_OBJECT
public:
    QtContainer();

    void test();

private:
    List list; // 添加List成员变量
};

#endif // QTCONTAINER_H
