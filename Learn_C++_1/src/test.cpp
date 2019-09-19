#include <iostream>
#include "test.h"

using namespace std;
test::test(int a, int b):regvar(a),constvar(b)//constructor can be overloaded,to initialize variables use member initializer(need to do like this if const variable syntax like a list variable value
{
    cout<<"i am the constructor"<<endl;
}

test::~test()//destructor cant have parameter, no return value and no deconstructor overloading
{
    cout<<"i am the desonstructor"<<endl;
}//destructor is called when program is finished running

void test::testfunc()
{
    cout<<"abcd"<<endl;
}

void test::consttestfunc() const
{
    cout<<"I am the constant funciton"<<endl;
}

void test::print()
{
    cout<<"regular variable == "<<regvar<<endl;
    cout<<"constant variable == "<<constvar<<endl;
}
