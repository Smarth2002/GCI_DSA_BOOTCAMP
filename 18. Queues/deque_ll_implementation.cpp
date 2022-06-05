#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node* prev;
    Node* next;
    int data;
};

Node* front=NULL, *rear=NULL;

void enqueueAtFront(int x)
{
    Node* temp=new Node;

    temp->data=x;
    temp->prev=NULL;
    temp->next=front;

    if(front == NULL && rear == NULL)       
        rear=temp;
    else
        front->prev=temp;

    front=temp;
    return;
}

void enqueueAtRear(int x)
{
    Node* temp=new Node;
    temp->next=NULL;
    temp->data=x;
    temp->prev=rear;

    if(front == NULL && rear == NULL)
        front=temp;  
    else
        rear->next=temp;
    
    rear=temp;
    return;
}

int getFront()
{
    if(front == NULL)
    {
        cout<<"empty queue";
        return -1;
    }
    return front->data;
}

int getRear()
{
    if(front == NULL)
    {
        cout<<"empty queue";
        return -1;
    }
    return rear->data;
}

void dequeueAtFront()
{
    if(front == NULL)
    {
        cout<<"empty queue";
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
        front->prev=NULL;
    }

    delete temp;
    return;
}

void dequeueAtRear()
{
    if(front == NULL)
    {
        cout<<"empty queue";
        return;
    }

    Node* temp=rear;

    if(front == rear)
    {
        front=NULL;
        rear=NULL;
    }
    else
    {
        rear=rear->prev;
        rear->next=NULL;
    }
    
    delete temp;
    return;
}

void display()
{
    if(front == NULL)
    {
        cout<<"empty queue";
        return;
    }

    Node* temp=front;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    return;
}

int main()
{
    enqueueAtFront(2);
    enqueueAtFront(5);
    enqueueAtRear(-1);
    enqueueAtRear(0);
    enqueueAtFront(7);
    enqueueAtFront(4);
    display();

    dequeueAtFront();
    dequeueAtRear();
    dequeueAtFront();

    display();

    return 0;
}