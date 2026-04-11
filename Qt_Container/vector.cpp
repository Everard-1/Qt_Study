#include "vector.h"
#include <QVector>
#include <QString>
#include <QDebug>

Vector::Vector() {}

void Vector::testQVector()
{
    QVector<QString> vector(10); // 创建一个初始大小为10的QVector
    vector[0] = "a";
    vector[1] = "b";
    vector[2] = "c";
    qDebug() << vector;

    vector.append("d"); // 在末尾添加元素
    qDebug() << vector;

    qDebug() << "Before resize: " << vector << Qt::endl
             << "Size: " << vector.size()
             << " Capacity: " << vector.capacity();
    vector.resize(5); // 调整Vector大小
    qDebug() << "After resize: " << vector << Qt::endl
             << "Size: " << vector.size()
             << " Capacity: " << vector.capacity();

    qDebug() << "Before squeeze: " << vector << Qt::endl
             << "Size: " << vector.size()
             << " Capacity: " << vector.capacity();
    vector.squeeze(); // 压缩Vector的容量以适应当前大小
    qDebug() << "After squeeze: " << vector << Qt::endl
             << "Size: " << vector.size()
             << " Capacity: " << vector.capacity();
}
