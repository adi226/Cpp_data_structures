#include <iostream>

using namespace std;

class Node{
public:
    int val;
    Node* next;
    Node* prev;
};

void pushfront(Node** h, int value){
    Node* new_node;
    new_node = new Node;
    new_node->val = value;
    new_node->next = *h;
    new_node->prev = nullptr;
    if(*h != nullptr){
        (*h)->prev = new_node;//here we have to access the data of h pointer
    }
    else{
        new_node->next = nullptr;
    }
    *h = new_node;//this step should be last
}

void pushprev(Node* h, int value){
    if(h==nullptr){
        cout<<"Given previous node cannot be null"<<endl;
        return;
    }
    Node* new_node;
    new_node = new Node;
    new_node->val = value;
    new_node->next = h->next;
    h->next = new_node;
    new_node->prev = h;
    if(new_node->next!=nullptr)
        new_node->next->prev = new_node;
}

void pushend(Node *h, int value){
    Node* new_node;
    new_node  = new Node;
    while(h->next!=nullptr){
        h = h->next;
    }
    new_node->val = value;
    new_node->next = nullptr;
    h->next = new_node;
    new_node->prev = h;
}

void pushnext(Node *h, int value){
    Node *new_node;
    new_node = new Node;
    if(h == nullptr){
        cout<<"Given next node cannot be null"<<endl;
        return;
    }
    new_node->val = value;
    new_node->next = h->next;
    new_node->prev = h;
    h->next = new_node;
    if(new_node->next!=nullptr){
        new_node->next->prev = new_node;
    }
}

void displaylist(Node *h){
    Node* last;
    while(h!=nullptr){
       // cout<<h<<" ";
        cout<<h->val<<" ";
        last = h;
        h = h->next;
    }
    cout<<endl;
    while(last!=nullptr){
       // cout<<last<<" ";
        cout<<last->val<<" ";
        last = last->prev;
    }
    cout<<endl;
}
//del is pointer to node to be deleted
void deletenode(Node** h, Node* del){
    Node * temp;
    temp = *h ;
    if(*h == nullptr || del == nullptr){
        cout<<"Node does not exist"<<endl;
        return;
    }
    if(*h == del && (*h)->next!=nullptr){
        (*h)->next->prev = nullptr;
        *h = del->next;
    }
    while(temp != del|| temp!=nullptr){
        temp = temp->next;
        if(temp == del){
            break;
        }
    }
    if(temp == nullptr){
        cout<<"Node does not exist"<<endl;
        return;
    }
    if(del->next!=nullptr){
        del->next->prev = del->prev;
    }
    if(del->prev!=nullptr){
        del->prev->next = del->next;
    }
    delete del;
}

void reverselist(Node** h){
    Node *temp, * current;
    current = *h;
    while(current != nullptr){
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    //if there is only one element then previous element is null
    if(temp!=nullptr){
        *h = temp->prev;//temp->prev;
    }

}
int main()
{
    Node *head = nullptr;
    head = new Node;
    head->next = nullptr;
    head->prev = nullptr;
    head->val = 4;
    pushfront(&head, 3);
    pushfront(&head, 2);
    pushfront(&head, 1);
    Node *nxt = head->next->next;
    Node* prv = head->next->next->next->prev;
    pushprev(nxt, 5);
    pushnext(prv, 5);
    pushend(head,6);
    displaylist(head);
    //deletenode(&head,head->next->next->prev);
    //displaylist(head);
    reverselist(&head);
    displaylist(head);
}
