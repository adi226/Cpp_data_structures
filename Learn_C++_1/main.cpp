#include <iostream>
#include <cstdlib>
#include <ctime> //access clock
#include "test.h"
using namespace std;

double get_sq(int x)
{
    return (x*x);
}

void print_square(int x)
{
    cout<<"Square of the number is: "<<get_sq(x)<<endl;
}

int find_occurance(int* p,int val)
{
    int count = 0;
    for (;*p!=0;++p)
    {
        if (*p == val)
            count++;
    }
    return count;
}

struct Vector
{
    int sz; //no. of elements
    double* elem;//pointer to elements
};
    Vector v;
void Vector_init(Vector& v,int s)
{
    v.sz = s;
    v.elem = new double[s];
}

double read_and_sum(int s)
{
    cout<<"Enter Elements"<<endl;
    for(int i = 0; i <s; i++)
    {
        cin>>v.elem[i];
    }
    double sum = 0;
    for(int i = 0; i <s; i++)
    {
        sum += v.elem[i];
    }
    return sum;
}
/*recursive function needs a base case. The base case returns a value without making any subsequent recursive calls.*/
int factorial(int x)
{
    if (x==1){
        return 1;
    }else{
        //cout<<x<<endl;
        //cout<<x*factorial(x-1)<<endl;
        int z = x*factorial(x-1);
        return x*factorial(x-1);}
}
/*Functions that receive a memory address need to have a pointer argument. pass by reference we are passing variable address*/
void printarray(int *a,int sizeofarray)
{
    //++(*a);
    for(int i=0;i<sizeofarray;i++)
    {
        cout<<(*a)+i<<"----"<<sizeof(a)<<endl;//sizeof used to find number of elements in the array
    }
}
int main()
{
    /*1.char v[6] {'a','b','r','h','j','p'};
    char* p = &v[3];
    cout<<p<<endl; //p = *(&p)
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<*(&p)<<endl;
   // cout<<**p<<endl
    cout << **(&p);*/
   /*2. int v[] = {1,2,3,4,9,6,9,8,9};
    int val = 9;
    int x = find_occurance(v,val);
    cout<<x<<endl;*/

/*3.double sum = read_and_sum(4);
cout<<sum;*/
/*referencing int g=10;
int& p = g;
cout<<p;*/
//If the program has choice it will always choose the local variable,
//to make use of global variable use :: global scope resolution operator
//different functions with same same is called function overloading
/*4.srand(time(0));
for(int y = 0; y<6; y++)
    {
       int x = rand();
       cout<<1+(x%6)<<endl;
    }*/
/*5.    int y = factorial(5);
    cout<<y;*/
 /*   int i[4] = {1,2,3,4};
  //  cout<<(*i)++;
  printarray(&(i[0]),4);
  int *k = &i[0];
  cout<<*k<<endl;
  k+=10; //when we add integers to pointers it doesn't changes the address of pointer but the element it is pointing to
  cout<<*k;*/
  /*test onetest;
  test* pttest = &onetest;
  onetest.testfunc();
  pttest->testfunc();//when accessing through pointer ise ->, and ending of each cpp file is the same
//if an object is created as constant it cannot be changed and it call only constant functions
*/
  test twotest(1,2);
  twotest.print();
  twotest.consttestfunc();
}
