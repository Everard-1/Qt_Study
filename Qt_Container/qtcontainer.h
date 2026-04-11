#ifndef QTCONTAINER_H
#define QTCONTAINER_H

#include <QObject>
#include "list.h"
#include "vector.h"

class QtContainer : public QObject
{
    Q_OBJECT
public:
    explicit QtContainer(QObject *parent = nullptr);

    void test();

private:
    List list; // 添加List成员变量
    Vector vector; // 添加Vector成员变量
};

#endif // QTCONTAINER_H
