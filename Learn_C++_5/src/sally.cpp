#include "sally.h"
#include <iostream>

using namespace std;
sally::sally()
{
    //ctor
}

sally::sally(int a)
{
    num = a;
    //ctor
}
sally sally::operator+(sally aso)
{
    sally brandnew;
    brandnew.num = num + aso.num;
    return (brandnew);
}
