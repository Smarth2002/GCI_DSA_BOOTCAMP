#include<bits/stdc++.h>
using namespace std;

int front=-1, rear=-1;
int a[10];

bool isEmpty()
{
    if(front == -1 && rear == -1)
        return true;
    
    return false;
}

void enqueue(int x)
{
    if( (rear+1) % 10 == front )
    {
        cout<<"queue is full"<<endl;
        return;
    }

    if(isEmpty())
    {
        front++;
        rear++;
    }
    else
    {
        rear=(rear+1)%10;        
    }
    a[rear]=x;

    return;
}

void dequeue()
{
    if(isEmpty())
    {
        cout<<"queue is empty"<<endl;
        return;
    }
    else if( front == rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%10;
    }

    return;
}

void print()
{
    int i=front;

    while (i != rear)
    {
        cout<<a[i]<<" ";
        i=(i+1)%10;
    }
    cout<<a[rear];
    cout<<endl;

    return;
}

int main()
{
    enqueue(14);
    enqueue(22);
    enqueue(13);
    enqueue(-6);

    print();

    dequeue();
    dequeue();

    print();

    enqueue(9);
    enqueue(20);
    enqueue(5);

    print();

    enqueue(20);
    
    return 0;
}