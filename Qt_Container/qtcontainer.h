#ifndef QTCONTAINER_H
#define QTCONTAINER_H

#include <QWidget>

class QtContainer : public QWidget
{
    Q_OBJECT
public:
    explicit QtContainer(QWidget *parent = nullptr);

};

#endif // QTCONTAINER_H
