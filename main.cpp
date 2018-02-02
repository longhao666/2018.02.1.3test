#include <iostream>

using namespace std;

#include "test.h"
#include "testglobal.h"

int main()
{
    cout << "Hello World!" << endl;
    Test t1;
    Test t2;
    testGlobal tg1;
    cout << t1.getmm() << endl; // 0
    cout << t2.getmm() << endl; // 0
    cout << t1.gethh() << endl; // 1
    cout << t2.gethh() << endl; // 1
    cout << t1.gettestll() << endl; // 2
    cout << tg1.gettestll() << endl; // 2
    t1.setmm(10);
    t1.sethh(20);
    t1.settestll(30);
    cout << t1.getmm() << endl; // 10
    cout << t2.getmm() << endl; // 10
    cout << t1.gethh() << endl; // 20
    cout << t2.gethh() << endl; // 1
    cout << t1.gettestll() << endl; // 30
    cout << tg1.gettestll() << endl; // 30
    tg1.settestll(25);
    cout << t1.gettestll() << endl; // 25
    cout << tg1.gettestll() << endl; // 25
    return 0;
}
