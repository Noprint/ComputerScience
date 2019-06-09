#include <iostream>
#include "ArrayList.h"
using namespace std;

int main()
{
    ArrayList myList(10);

    myList.arrayDisplay();
    for (int i = 0; i < 20; ++i)
        myList.arrayInsert(i);

    myList.arrayDisplay();

    for (int i = 0; i < 15; ++i)
        myList.arrayDelete(i);

    myList.arrayDisplay();

    return 0;
}