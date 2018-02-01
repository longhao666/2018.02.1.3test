#include "test.h"

int mm = 0;

Test::Test()
{
    hh = 1;
}

void Test::setmm(int temp)
{
    mm = temp;
}

int Test::getmm()
{
    return mm;
}

void Test::sethh(int temp)
{
    hh = temp;
}

int Test::gethh()
{
    return hh;
}
