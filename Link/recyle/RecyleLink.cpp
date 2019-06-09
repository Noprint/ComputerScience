//
// Created by liuzhipeng on 19-5-26.
//

#include "RecyleLink.h"

RecyleLink::RecyleLink() {
    head = new struct node;
    head->next = nullptr;
    tail = head;
    tail->next = head;
    head->element = -1;
    len = 0;
}

int RecyleLink::getLength() {
    return len;
}

void RecyleLink::linkInsert(ElementType element) {
    nodePtr tmp = new struct node;
    tmp->element = element;

    tmp->next = head;
    tail->next = tmp;
    tail = tail->next;

    ++len;
}

void RecyleLink::linkDelete(ElementType element) {
    nodePtr tmp = head;
    while (tmp->next != head) {
        if (tmp->next->element == element) {
            nodePtr p = tmp->next;
            tmp->next = p->next;
            delete p;
            --len;
            return;
        }
    }
}

Node RecyleLink::linkFind(ElementType element) {
    nodePtr tmp = head;

    while (tmp->next != head) {
        if (tmp->next->element == element)
            return tmp->next;
        tmp = tmp->next;
    }

    return nullptr;
}

void RecyleLink::linkDisplay() {
    nodePtr tmp = head;
    std::cout << "list element is: [";
    while (tmp->next != head) {
        std::cout << tmp->next->element;
        if (tmp->next->next != head)
            std::cout << ", ";
        tmp = tmp->next;
    }
    std::cout << "]" << std::endl;
    std::cout << "length is: " << len << std::endl;
}
