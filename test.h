#ifndef TEST_H
#define TEST_H

#include "global.h"

class Test
{
public:
    Test();
    void setmm(int temp);
    int getmm();
    void sethh(int temp);
    int gethh();
    void settestll(int temp);
    int gettestll();
private:
    int hh;
};

#endif // TEST_H
