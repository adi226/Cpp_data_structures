#include <iostream>
#include <assert.h>
using namespace std;

class Node{
public:
    int val;
    Node* next;
};
//push at head
void push(Node **h,int val){
Node* new_node = new Node();
new_node->val = val;
new_node->next = *h;
*h = new_node;
}

void display_list(Node* h){
while(h!=nullptr){
    cout<<h->val<<"  ";
    h = h->next;
}
cout<<endl;
}

int GetNth(Node* h, int index){
Node *temp = h;
int counter=0;;
while(temp!=nullptr){
        if (index == counter){
            return temp->val;
        }
        else{
            temp = temp->next;
        }
        ++counter;

}
/*if (temp == nullptr){
    return -1;
}
else{
    return (temp->val);
}*/
assert(0);
}

int middle1(Node *h)
{
    Node* temp = h;
    int ele=0;
    while(temp!=nullptr){
        temp = temp->next;
        ele++;
    }
    if(ele==1)
        return h->val;
    ele = ele/2;
    while(ele>0){
        h = h->next;
        --ele;
        if(ele == 0){
            return h->val;
        }
    }
}

int middle2(Node *h){
Node *ptr1,*ptr2;
ptr2 = h;
ptr1 = h;/*
while(ptr2!=nullptr){
    ptr2 = ptr2->next;
    if(ptr2==nullptr)
        break;
    ptr2 = ptr2->next;
    ptr1 = ptr1->next;
    }
    return ptr1->val;
}*/
    if(h!=nullptr){
        while(ptr2!=nullptr && ptr2->next!=nullptr){
            ptr2 = ptr2->next->next;
            ptr1 = ptr1->next;
        }
        return(ptr1->val);
    }
}

int middle3(Node* h){
int counter=0;
Node* mid = h;
    while(h!=0){
        counter++;
        if(counter%2==1){
            mid = mid->next;
        }
        h = h->next;
    }
    return (mid->val);
}

int occur3(Node *h, int data){
    Node* temp = h;
    static int freq  = 0;
    if(temp == nullptr){
        return freq;
    }
    if(temp->val == data){
        freq++;
    }
    return (occur3(temp->next,data));
}

int occur1(Node *h, int data){
    Node* temp = h;
    int counter = 0;
    if(temp == nullptr){
        return counter;
    }
    while(temp!=nullptr){
        if(temp->val == data){
            counter++;
        }
        temp = temp->next;
    }
    return counter;
}

int main()
{
    Node* head = nullptr;
    push(&head, 1);
    push(&head, 7);
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);
    push(&head, 4);
    display_list(head);
    //cout<<middle3(head)<<endl;
    //cout<<GetNth(head, 6);
    cout << occur1(head,1)<<endl;
    cout << occur3(head,1)<<endl;
    return 0;
}
