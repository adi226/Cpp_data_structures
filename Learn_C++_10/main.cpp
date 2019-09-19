#include <iostream>

using namespace std;

//Class templates

template <class T>
class aditya
{
    T first,second;
public:
    aditya(T a, T b)
    {
        first =a;
        second =b;
    }
    T bigger();
};
template <class T> //RULE 1;this has to be typed again if function is written outside
T aditya<T>::bigger()//RULE 2:after class name u have to include function template parameter
{
    return (first>second?first:second);
}
int main()
{
    aditya <int> aadi(54,33);//RULE 3:whenever working with class template need to tell what type of data it will be dealing with
    cout<<aadi.bigger();
}
