#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

Node* top=NULL;

void push(int x)
{
    Node* temp=new Node();

    temp->data=x;
    
    temp->link=top;
    top=temp;

    return;
}

void pop()
{
    if(top == NULL)
        return;
    
    Node* temp=top;
    top=top->link;

    delete(temp);

    return;
}

void print()
{
    Node* temp=top;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;

    return;
}

int main()
{
    push(2);
    print();
    push(5);
    print();
    pop();
    print();

    return 0;
}