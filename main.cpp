#include <iostream>

using namespace std;

#include "test.h"

int main()
{
    cout << "Hello World!" << endl;
    Test t1;
    Test t2;
    cout << t1.getmm() << endl; // 0
    cout << t2.getmm() << endl; // 0
    cout << t1.gethh() << endl; // 1
    cout << t2.gethh() << endl; // 1
    t1.setmm(10);
    t1.sethh(20);
    cout << t1.getmm() << endl; // 10
    cout << t2.getmm() << endl; // 10
    cout << t1.gethh() << endl; // 20
    cout << t2.gethh() << endl; // 1
    return 0;
}
