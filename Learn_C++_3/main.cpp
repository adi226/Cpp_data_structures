#include <iostream>

using namespace std;
//Keyword: friend function - every class can have friend, a friend of class is is separate from class but has access to functions and variables.
// if a class wanted to have a function, it will take object of that class as parameter

class lab{
    public:
        lab(){labvar=0;}
    private:
        int labvar;

    friend void labfriend(lab &lb);
};

void labfriend(lab &lb){
    lb.labvar = 99;
    cout<<lb.labvar<<endl;
}

int main()
{
    lab test;
    labfriend(test);
}
