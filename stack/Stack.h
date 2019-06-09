//
// Created by liuzhipeng on 19-5-27.
//

#ifndef STACK_STACK_H
#define STACK_STACK_H
typedef int ElementType;

#include "LinkList.h"

class Stack {
public:
    Stack();
    int getLength();
    void push(ElementType element);
    ElementType pop();
    ElementType top();

private:
    LinkList list;

};


#endif //STACK_STACK_H
