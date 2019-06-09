#include <iostream>
#include "LinkList.h"
using namespace std;

int main()
{
    LinkList mylist;
    for (int i = 0; i < 4; i++)
        mylist.linkInsert(i);

    mylist.linkDisplay();

    mylist.linkDelete(0);

    mylist.linkDisplay();

    if (mylist.linkFind(10) == nullptr)
        cout << "not found" << endl;
    else
        cout << "find!" << endl;


    return 0;
}