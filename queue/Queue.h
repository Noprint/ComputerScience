//
// Created by liuzhipeng on 19-5-29.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

#include "ArrayList.h"


class Queue {
public:
    int len;
    Queue();
    int getLength();
    void addQ(ElementType element);
    ElementType delQ();
    bool isEmpty();
    // 队列和栈这两种数据结构都应该没有查找的，内部相当于是透明的

private:
    ArrayList list;
};


#endif //QUEUE_QUEUE_H
