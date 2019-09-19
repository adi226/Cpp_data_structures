#include <iostream>

using namespace std;
//function templates-> functions that can handle multiple types of data

/*int addcrap(int a, int b){
    return a+b;
}*/
template <class aditya> //building a generic type of data
aditya addcrap(aditya a, aditya b){//aditya is template and is generic type of data
    return a+b;
}

template <class FIRST, class SECOND>//we are going to work with two datatypes
FIRST smaller(FIRST a, SECOND b){
return  (a<b?a:b);
}

int main()
{
    double x=3.3,y=4,z;
    double a=93.33;
    int b=93.55;
    z=addcrap(y,x);
    cout<<z<<endl;
    cout<<smaller(a,b)<<endl;
}
