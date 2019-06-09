//
// Created by liuzhipeng on 19-5-26.
//
#ifndef _IOSTREAM_
#include <iostream>
#endif

#ifndef ALONELINK_LINKLIST_H
#define ALONELINK_LINKLIST_H
typedef int ElementType;
typedef struct node* nodePtr;
typedef nodePtr Node;
typedef nodePtr Link;

class LinkList {
public:
    int len;
    LinkList();
    int getLength();
    void linkInsert(ElementType element);
    void linkDelete(ElementType element);
    nodePtr linkFind(ElementType element);
    void linkDisplay();

    ElementType lastDelete();
    ElementType getLastElement();

private:
    Link list;
    nodePtr tail;

};

struct node {
    ElementType element;
    nodePtr next;
};


#endif //ALONELINK_LINKLIST_H
