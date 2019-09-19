#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
};

void printlist(Node* h){
    while(h!=nullptr){//or h!=0
        cout<<h->data<<" ";
        h = h->next;
    }
    cout<<endl;
}

/*if pass by reference is used, in main it will be pushfirst(head,newData);*/
/*void pushfront(Node*& head, int newData){
Node* newNode;
newNode = new Node;
newNode->data = newData;
newNode->next = head;
head = newNode;
}*/

/*if pass by pointer is used, in main it will be pushfirst(&head,newData);
here we change the value in the pointer head so reference of pointer used*/
void pushfront(Node** head, int newData){
Node* newNode;
newNode = new Node;
newNode->data = newData;
newNode->next = *head;
*head = newNode;
}

/*here we change the value pointer gvnNode is pointing to*/
void pushgiven(Node* gvnNode, int newData){
Node * newNode;
newNode = new Node;
newNode->data = newData;
newNode->next = gvnNode->next;
gvnNode->next = newNode;
}
#if 1
void pushend(Node* h, int newData){
Node* newNode;
newNode = new Node;
newNode->data = newData;
newNode->next = nullptr;
while(h!=nullptr){
    if(h->next == nullptr){
        h->next = newNode;
        break;
    }
    h = h->next;
}
h->next = newNode;
}
#endif

void reverselistiterative(Node ** h){
    Node *prev, *curr, *forw;
    prev = nullptr;
    curr = *h;
    while(curr!=nullptr){
        forw = curr->next;
        curr->next = prev;
        prev = curr;//at this point it becomes last element;
        curr = forw;//at this point it becomes null pointer
    }
    *h = prev;
}

Node* reverselistrecursive(Node *h){
    if(h == nullptr || h->next == nullptr){
            return h;
    }
    Node* rest = reverselistrecursive(h->next);
    h->next->next = h;
    h->next = nullptr;
    return rest;
}

int main()
{
    //By using only objects
   /* Node head;
    Node second;
    Node third;

    head.data = 1;
    head.next = &second;

    second.data = 2;
    second.next = &third;

    third.data = 3;
    third.next = nullptr;
    printlist(&head);*/

    //By using pointer to objects
    Node* head;
    Node* second;
    Node* third;

    head = new Node;
    second = new Node;
    third = new Node;

    head->data = 4;
    head->next = second;

    second->data = 3;
    second->next = third;

    third->data = 2;
    third->next = nullptr;
    int newData1 = 1;
    int newData2 = 5;
    int newData3 = 6;
    pushfront(&head,newData1);
    pushgiven(second, newData2);
    pushend(head,newData3);
    printlist(head);
    reverselistiterative(&head);
    printlist(head);
}
