#include <iostream>
#include <sally.h>
using namespace std;
//operator overloading - using operators as + * and change the way hey are used. ex using + to add two objects of a class
// to operator overloading create a function with return type, name it operator(operator you want to overload)(parameter)
int main()
{
    sally a(34);
    sally b(21);
    sally c;
    c =a+b;
    //here a is used as current operator and b is looked as parameter for sally aso
    cout<<c.num;
}
