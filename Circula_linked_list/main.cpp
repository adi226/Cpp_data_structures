#include <iostream>

using namespace std;

class Node{
public:
    int val;
    Node* next;
};

Node* insertnode(Node** l,int data){
    Node *new_node, *temp;
    new_node = new Node;
    new_node->val = data;
    if(*l == nullptr){
        new_node->next = new_node;
        *l = new_node;
        return *l;
    }
    if(((*l)->val)<(new_node->val)){
        new_node->next = (*l)->next;
        (*l)->next = new_node;
        *l = new_node;
        return *l;
    }
    temp = (*l)->next;
    if(((*l)->val)>(new_node->val)){
        while(temp!=*l){
                if(temp->val>=new_node->val){
                    break;
                }
            temp = temp->next;
        }
        new_node->next = temp->next;
        temp->next = new_node;
        }
    return (*l);
}

void displaylist(Node *last){
    Node* current = last->next;
    do{
        cout<<current->val<<" ";
        current = current->next;
    }while(current != last->next);
    cout<<endl;
}

int main()
{
    Node* last = nullptr;
    last = insertnode(&last, 5);
    displaylist(last);
    last = insertnode(&last, 6);
    displaylist(last);
    last = insertnode(&last, 7);
    displaylist(last);
    last = insertnode(&last, 5);
    displaylist(last);
    last = insertnode(&last, 9);
    last = insertnode(&last, 1);
    last = insertnode(&last, 15);
    last = insertnode(&last, 8);
    displaylist(last->next);
}
