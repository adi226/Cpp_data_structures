#include <iostream>

using namespace std;

//template specialization ->way to make a class have different implementation if different type of data is passed to it, eg handling numbers and characters in a class
template <class T>
class aditya{
public:
    aditya(T x){
    cout<<x<<" is not a character"<<endl;}
};

//once it sees there is a character it will be handled here
template<> //telling c++ that we are using template specialization template empty parameter
class aditya<char>{//telling c++ what kind of data it will specialize in
public:
    aditya(char x){//here no T as this is specially for char
        cout<<x<<" is a character"<<endl;
    }
};
int main()
{
aditya <int>aadi1(3);
aditya <double>aadi2(3.14);
aditya <char>aadi3('j');
}
