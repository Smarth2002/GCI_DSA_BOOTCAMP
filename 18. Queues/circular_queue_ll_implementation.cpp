#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* next;
    int data;
};

Node* front=NULL, *rear=NULL;

void enqueue(int x)
{
    Node* temp=new Node;
    temp->data=x;

    if(front == NULL && rear == NULL)
        front=temp;
    else
        rear->next=temp;
    
    temp->next=front;
    rear=temp;
    return;
}

void dequeue()
{
    if(front == NULL && rear == NULL)
    {
        cout<<"queue empty";
        return;
    }

    Node* temp=front;

    if(front == rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        front=front->next;
        rear->next=front;
    }

    delete temp;
    return;
}

void disp()
{
    Node* temp=front;
    while (temp != rear)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
    return;
}

int main()
{
    enqueue(14);
    enqueue(22);
    enqueue(6);

    disp();

    dequeue();
    dequeue();

    disp();
    enqueue(9);
    enqueue(20);
    
    disp();

    return 0;
}