#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void push(Node** head_ref, int newData){
Node* newNode;
newNode = new Node;
newNode->data = newData;
newNode->next = *head_ref;
*head_ref = newNode;
}

void deletelist(Node** h){
Node * current, *next;
while(current!=nullptr){
    next = current->next;
    delete current;
    current = next;
}
*h = nullptr;//deref the headpointer
}

//using recursion
int ListSize(Node* h){
    if(h == nullptr){
        return 0;
    }
    else{
        return (1+ListSize(h->next));
    }
}

bool Search(Node *h, int x){
Node* temp;
temp = h;
if (temp == nullptr)
    return 0;
if(temp->data == x)
    return 1;
return (Search(temp->next,x));
}
#if 0
//using iteration
int ListSize(Node** h){
    int count = 0;
    Node *temp;
    temp = *h;
    while(temp!=nullptr){
        temp = temp->next;
        count++;
    }
    return count;
}
#endif
#if 0
bool Search(Node *h, int x){
Node* temp;
temp = h;
while(temp!=nullptr){
    if(x == temp->data){
        return 1;
    }
    temp = temp->next;
}
if(temp = nullptr){
    return 0;
}
return 0;
}
#endif
int main()
{
    Node* head;
    Node* second;
    Node* third;
    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = nullptr;
    //int newData = 4;
   // push(&head,newData);
    //deletenode(&head,3);
    cout<<ListSize(head)<<endl;
    cout<<Search(head,2)<<endl;

}
