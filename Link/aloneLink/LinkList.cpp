//
// Created by liuzhipeng on 19-5-26.
//

#include "LinkList.h"

LinkList::LinkList() {
    list = new struct node;
    list->next = nullptr;
    list->element = -1;
    tail = list;
    len = 0;
}

int LinkList::getLength() {
    return len;
}

void LinkList::linkInsert(ElementType element) {
    Node tmp = new struct node;

    tmp->element = element;

    tmp->next = tail->next;
    tail->next = tmp;

    tail = tail->next;
    ++len;
}

void LinkList::linkDelete(ElementType element) {
    nodePtr tmp = list;
    while (tmp->next != nullptr) {
        if (tmp->next->element == element) {
            nodePtr p = tmp->next;
            tmp->next = p->next;
            delete p;
            --len;
            return;
        }
    }
}

nodePtr LinkList::linkFind(ElementType element) {
    nodePtr p = list;
    while (p->next != nullptr) {
        if (p->next->element == element)
            return p->next;
        p = p->next;
    }
    return nullptr;
}

void LinkList::linkDisplay() {
    std::cout << "list element is: [";
    nodePtr p = list;
    while (p->next != nullptr) {
        std::cout << p->next->element;
        if (p->next != tail)
            std::cout << ", ";
        p = p->next;
    }
    std::cout << "]" << std::endl;
    std::cout << "len is: " << len << std::endl;
}
