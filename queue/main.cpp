#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue q1;
    for (int i = 0; i < 10; i++)
        q1.addQ(i);

    for (int i = 0; i < 10; i++)
        cout << q1.delQ() << endl;





    return 0;
}