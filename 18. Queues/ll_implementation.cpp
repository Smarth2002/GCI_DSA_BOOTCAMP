#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* front=NULL, *rear=NULL;

void enqueue(int x)
{
    Node* temp=new Node;
    temp->data=x;
    temp->next=NULL;

    if(front == NULL && rear == NULL)
    {
        front=temp;
        rear=temp;
    }
    else
    {
        rear->next=temp;
        rear=temp;
    }

    return;
}

void dequeue()
{
    if(front == NULL && rear == NULL)
    {
        cout<<"queue is empty"<<endl;
        return;
    }

    Node* temp=front;

    if(front == rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
        front=front->next;
    
    delete temp;

    return;
}

void print()
{
    Node* temp=front;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

    return;
}

int main()
{
    enqueue(2);
    enqueue(5);
    enqueue(7);
    dequeue();
    enqueue(3);
    enqueue(1);
    enqueue(9);
    enqueue(10);
    enqueue(4);
    enqueue(6);
    dequeue();
    enqueue(2);

    print();

    enqueue(15);
    enqueue(30);

    print();
    enqueue(30);

    return 0;
}