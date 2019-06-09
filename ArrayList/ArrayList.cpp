//
// Created by liuzhipeng on 19-5-26.
//

#include "ArrayList.h"

ArrayList::ArrayList() {
    this->capacity = 20;
    this->len = 0;
    this->array = newArray();
}

ArrayList::ArrayList(int capacity) {
    this->capacity = capacity;
    this->len = 0;
    this->array = newArray();
}

int ArrayList::getCapacity() {
    return capacity;
}

int ArrayList::getLen() {
    return len;
}

void ArrayList::arrayInsert(ElementType element) {
    if (len > (capacity / 2))
        resize(2 * capacity);
    array[len] = element;
    len++;
}

ElementType *ArrayList::newArray() {
    array = new ElementType[capacity];
    if (array == nullptr)
        throw "memory is null!";
    return array;
}

void ArrayList::arrayDelete(ElementType element) {
    int position = -1;
    for (int i = 0; i < len; ++i) {
        if (array[i] == element) {
            position = i;
            break;
        }
    }
    if (position == -1)
        return;

    for (int i = position; i < len - 1; ++i) {
        array[i] = array[i+1];
    }
    --len;

    if (len < (capacity / 4))
        resize(capacity / 2);
}

int ArrayList::arrayFind(ElementType element) {
    for (int i = 0; i < len; ++i) {
        if (array[i] == element)
            return i;
    }
    return -1;
}

void ArrayList::arrayDisplay() {
    std::cout << "array element is: [";
    for (int i = 0; i < len; ++i) {
        std::cout << array[i];
        if (i != len - 1)
            std::cout << ", ";
    }
    std::cout << "]" << std::endl;
    std::cout << "capacity is: " << capacity << ", len is: " << len << std::endl;
}

void ArrayList::resize(int newCapacity) {
    capacity = newCapacity;
    auto* tmp = new ElementType[capacity];
    for (int i = 0; i < len; i++)
        tmp[i] = array[i];

    ElementType* p = array;
    array = tmp;
    delete []p;
}


