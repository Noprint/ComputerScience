//
// Created by liuzhipeng on 19-5-27.
//

#include "Stack.h"
#include "LinkList.h"

Stack::Stack() {

}

int Stack::getLength() {
    return list.len;
}

void Stack::push(ElementType element) {
    list.linkInsert(element);
}

ElementType Stack::pop() {
    return list.lastDelete();
}

ElementType Stack::top() {
    return list.getLastElement();
}
