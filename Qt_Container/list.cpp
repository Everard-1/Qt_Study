#include "list.h"
#include <QList>
#include <QDebug>
#include <QRandomGenerator>
#include <algorithm>
#include <numeric>

List::List() {}

void List::testQList()
{
    QList<int> list1, list2;
    list1 << 1 << 2 << 3; // 列表添加元素
    list2 << 5 << 6 << 7;
    list2.append(8); // 列表末尾添加元素
    list1.append(list2);
    list1.insert(3, 4); // 列表索引插入元素

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
    list1.removeAt(0); // 删除指定索引元素
    for (int i : qAsConst(list1))
    {
        debug << i << " ";
    }
    debug << Qt::endl;
}

/**
 * @brief List::practiceQList
 * @description: QList练习
 * 创建 QList 存储 10 个随机整数
 * 计算总和、平均值、最大值、最小值
 * 删除所有偶数，输出结果
 */
void List::practiceQList()
{
    QList<int> randomList;
    for (int i = 0; i < 10; i++)
    {
        randomList.append(QRandomGenerator::global()->bounded(0, 100)); // 生成0-99之间的随机整数
    }
    qDebug() << "Random List:" << randomList;
    std::sort(randomList.begin(), randomList.end()); // 排序
    qDebug() << "Sorted List:" << randomList;

    int sum = std::accumulate(randomList.begin(), randomList.end(), 0); // 求和
    qDebug() << "Sum:" << sum;
    double average = static_cast<double>(sum) / randomList.size(); // 平均值
    qDebug() << "Average:" << average;
    int max = *std::max_element(randomList.begin(), randomList.end()); // 最大值
    qDebug() << "Max:" << max;
    int min = *std::min_element(randomList.begin(), randomList.end()); // 最小值
    qDebug() << "Min:" << min;

    randomList.erase(std::remove_if(randomList.begin(), randomList.end(), [](int num)
                                    { return num % 2 == 0; }),
                     randomList.end()); // 删除偶数
    qDebug() << "List after removing even numbers:" << randomList;
}
