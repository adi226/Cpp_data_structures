#include <iostream>
#include <bits/stdc++.h>
#include <climits>

using namespace std;

class StackNode{
public:
    int data;
    StackNode* next;
};

StackNode* newnode(int data){
    StackNode* new_node = new StackNode;
    new_node->data = data;
    new_node->next = nullptr;
    return new_node;
}
//new node will become the head here
void push(StackNode **root, int data){
    StackNode *stackNode = newnode(data);
    stackNode->next = *root;
    *root = stackNode;
    cout<<data<<" pushed to stack\n";
}
int isEmpty(StackNode *root){
    return !root;
}
int pop(StackNode **root){
    if(isEmpty(*root))
        return INT_MIN;
    StackNode *temp = (*root)->next;
    int val = (*root)->data;
    delete *root;
    (*root) = temp;
    return val;
}
int peek(StackNode *root){
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    StackNode *root = nullptr;
    pop(&root);
    push(&root,10);
    push(&root,20);
    push(&root,30);
    cout << pop(&root) << " popped from stack\n";

    cout << "Top element is " << peek(root) << endl;

    return 0;
}

