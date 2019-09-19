#include <iostream>
#include <Birthday.h>
#include <people.h>
using namespace std;
//composition: a class can have objects of other class as its members
int main()
{
    Birthday birthobj(9,17,1992);
    people Aditya("Aditya Sharma",birthobj);
    Aditya.printinfo();
}
//object from a class if used in other class, then other class can used the functions of class from which the object belongs to
