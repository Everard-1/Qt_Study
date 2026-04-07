#ifndef QTCONTAINER_H
#define QTCONTAINER_H

#include <QWidget>

class QtContainer : public QWidget
{
    Q_OBJECT
public:
    explicit QtContainer(QWidget *parent = nullptr);

private:
    void test();
    void testQList();
};

#endif // QTCONTAINER_H
