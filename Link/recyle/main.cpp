#include <iostream>
#include "RecyleLink.h"
using namespace std;

int main()
{
    RecyleLink mylist;
    for (int i = 0; i < 10; ++i)
        mylist.linkInsert(i);

    mylist.linkDisplay();

    for (int i = 0; i < 5; ++i)
        mylist.linkDelete(i);

    mylist.linkDisplay();

    if (nullptr == mylist.linkFind(50))
        cout << "not found" << endl;
    else
        cout << "found!" << endl;


    return 0;
}