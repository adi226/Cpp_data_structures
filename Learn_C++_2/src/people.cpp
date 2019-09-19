#include "people.h"
#include "Birthday.h"
#include <iostream>

using namespace std;
//when using object of other class then use member initializer list
people::people(string x, Birthday bo)
:name(x),dateofbirth(bo)
{
    //ctor
}

void people::printinfo()
{
    cout<<name<<"was born on ";
    dateofbirth.printdate();
}
