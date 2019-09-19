#include "hannah.h"
#include <iostream>
using namespace std;
hannah::hannah(int num)
:h(num)
{

}//this keyword stores the address of the current object you are working withs

void hannah::printstf(){
    cout<<"h="<<h<<endl;//this assumes you are working with current object
    cout<<"this->"<<this->h <<endl;//this is a pointer, this implies you are working with current object
    cout<<"(*this).h="<<(*this).h<<endl;//* meaning dereferencing the pointer
}
