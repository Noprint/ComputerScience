//
// Created by liuzhipeng on 19-5-26.
//
#ifndef _IOSTREAM_
#include <iostream>
#endif

#ifndef ARRAYLIST_ARRAYLIST_H
#define ARRAYLIST_ARRAYLIST_H
typedef int ElementType;



class ArrayList {
private:
    int capacity;
    ElementType* array;

    ElementType* newArray();
    void resize(int newCapacity);

public:
	int len;
    ArrayList();
    ArrayList(int capacity);
    int getCapacity();
    int getLen();
    void arrayInsert(ElementType element);
    void arrayDelete(ElementType element);
    int arrayFind(ElementType element);
    void arrayDisplay();

    ElementType delFirst();

};


#endif //ARRAYLIST_ARRAYLIST_H
