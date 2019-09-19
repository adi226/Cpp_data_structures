#include <iostream>
#include <daughter.h>
#include <mother.h>
using namespace std;
//inheritance - inherit stuff from other class
//base class - class with all stuff in it
//derived - class that gets the stuff
//class name: public class where to inherit from (public stuff from base class will be here. It will include public variables and functions
int main()
{
    mother mom;
    mom.sayname();

    daughter shweta;
    shweta.sayname();
}
