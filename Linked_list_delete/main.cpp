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

void printlist(Node* h){
    while(h!=nullptr){
        cout<<h->data<<endl;
        h = h->next;
    }
}
/*using single pointer*/
/*
void deletenode(Node* h, int key){
    Node* prev, *temp;
    temp = h;
    while(h!=nullptr && h->data!=key){
            prev = h;
            h = h->next;
    }

    prev->next = h->next;
    delete temp;

}*/
#if 0
void deletenode(Node** h, int key){
    Node* prev, *temp;
    temp = *h;

    //if only one element and it has key
    if((temp->data == key) &&(temp->next == nullptr))
    {
        *h = temp->next;
        delete temp;
        return;
    }

    //search for the element
    while(temp!=nullptr && temp->data!=key){
            prev = temp;
            temp = temp->next;
    }
    //if the element was not found
    if(temp == nullptr)
        return;

    prev->next = temp->next;
    delete temp;
}
#endif
#if 1
void deleteNode(Node** h, int pos){
    Node* temp = *h, * nextnode;
   /* while(pos!=0){
        prev = temp;
        temp = temp->next;
        --pos;
        if(pos == 0){
        prev->next = temp->next;
        delete temp;
        return;
    }
    }*/
    if(pos == 0){
        *h = temp->next;
        delete temp;
        return;
    }
    //find previous node
    for (int i = 0; temp!=nullptr && i<pos-1;i++){
        temp = temp->next;
    }
    // If position is more than number of ndoes
    if (temp == NULL || temp->next == NULL)
         return;
    nextnode = temp->next->next;

    delete temp->next;
    temp->next = nextnode;
}
#endif // 0
#if 0
void deleteNode(struct Node **head_ref, int position)
{
   // If linked list is empty
   if (*head_ref == NULL)
      return;

   // Store head node
   struct Node* temp = *head_ref;

    // If head needs to be removed
    if (position == 0)
    {
        *head_ref = temp->next;   // Change head
        free(temp);               // free old head
        return;
    }

    // Find previous node of the node to be deleted
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;

    // If position is more than number of ndoes
    if (temp == NULL || temp->next == NULL)
         return;

    // Node temp->next is the node to be deleted
    // Store pointer to the next of node to be deleted
    struct Node *next = temp->next->next;

    // Unlink the node from linked list
    free(temp->next);  // Free memory

    temp->next = next;  // Unlink the deleted node from list
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
    int pos = 1;
    deleteNode(&head, pos);
    printlist(head);
}
