#include <iostream>

using namespace std;
//exception handling: for this we use try block
int main()
{
   /* try{
        int momsage = 30;
        int sonsage = 34;

        if (sonsage>momsage){//whenever something occur that shouldn't, then we need to tell computer we do this using throw
            throw 99; //error number can be any number
        }
    }catch(int x){ //to handle that error here x==99,
        cout<<"son can not be older than mom, error number "<<x;
    }*/
    try{
        int num1;
        cout<<"enter first number: "<<endl;
        cin>>num1;//arrow tells direction of data flow

        int num2;
        cout<<"enter second number: "<<endl;
        cin>>num2;

        if (num2 == 0){
            throw 0;
        }

        cout<<num1/num2<<endl;
    }catch(...){//... is the default catch
        cout<<"you cant divide by 0"<<endl;
    }
}
