//
// Created by liuzhipeng on 19-5-29.
//

#include "Queue.h"

Queue::Queue() {
    this->len = 0;
}

int Queue::getLength() {
    return this->len;
}

void Queue::addQ(ElementType element) {
    list.arrayInsert(element);
    ++len;
}

ElementType Queue::delQ() {
    return list.delFirst();
}

bool Queue::isEmpty() {
    return len > 1;
}
