#include <iostream>

using namespace std;
#define MAX 1000
class Stack{
int top;
public:
    int a[MAX];
    Stack(){top = -1;}
    bool push(int x);
    int pop();
    bool isEmpty();
    int peek();
};

bool Stack::push(int x){
    if(top >= MAX-1){
        cout<<"Stack overflow"<<endl;
        return false;
    }
    a[++top] = x;
    cout<<x<<" pushed to stack"<<endl;
    return true;
}

int Stack::pop(){
    if(top < 0){
        cout<<"Stack underflow"<<endl;
    }
    return a[top--];
}

bool Stack::isEmpty(){
    return (top<0);
}

int Stack::peek(){
    if(top <= 0){
        cout<<"Stack is empty";
        return 0;
    }
    return a[top];
}

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
    cout << s.pop() << " Popped from stack\n";
}
