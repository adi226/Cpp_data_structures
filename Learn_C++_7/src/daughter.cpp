#include "daughter.h"
#include <iostream>
using namespace std;
daughter::daughter()
{
    cout<<"i am daughter constructor"<<endl;
    //ctor
}

daughter::~daughter()
{
    cout<<"i am daughter deconstructor"<<endl;
    //ctor
}
void daughter::dosomething()
{
    publicv = 1;
    protectedv = 2;
    //privatev = 3;
}
