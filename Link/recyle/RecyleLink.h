//
// Created by liuzhipeng on 19-5-26.
//
#ifndef _IOSTREAM_
#include <iostream>
#endif

#ifndef RECYLE_RECYLELINK_H
#define RECYLE_RECYLELINK_H
typedef int ElementType;
typedef struct node* nodePtr;
typedef nodePtr Node;
typedef Node Link;

class RecyleLink {
public:
    int len;
    RecyleLink();
    int getLength();
    void linkInsert(ElementType element);
    void linkDelete(ElementType element);
    Node linkFind(ElementType element);
    void linkDisplay();

private:
    Link head;
    Link tail;


};

struct node {
    ElementType element;
    struct node* next;
};

#endif //RECYLE_RECYLELINK_H
