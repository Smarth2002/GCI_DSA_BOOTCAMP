#include<bits/stdc++.h>
using namespace std;

#define n 5
int Deque[n];
int f=-1, r=-1;

void enqueueAtFront(int x)
{
    if( (r+1)%n == f )
    {
        cout<<"queue full"<<endl;     
        return;
    }

    if(f == -1 && r == -1)
    {
        f=0;
        r=0;   
    }
    else
        f=(f+n-1)%n;
    
    Deque[f]=x;

    return;
}

void enqueueAtRear(int x)
{
    if( (r+1)%n == f )
    {
        cout<<"queue full"<<endl;
        return;
    }

    if(f == -1 && r == -1)
    {
        f=0;
        r=0;
    }
    else  
        r=(r+1)%n;
    
    Deque[r]=x;

    return;
}

void dequeueAtFront()
{
    if(f == -1 && r == -1)
        cout<<"queue empty"<<endl;
    else if(f == r)
    {
        f=-1;
        r=-1;
    }
    else
        f=(f+1)%n;
    
    return;
}

void dequeueAtRear()
{
    if(f == -1 && r == -1)
        cout<<"queue empty"<<endl;
    else if(f == r)
    {
        f=-1;
        r=-1;
    }
    else
        r=(r+n-1)%n;

    return;
}

int getFront()
{
    if(f == -1 && r == -1)
    {
        cout<<"queue empty"<<endl;
        return -1;
    }
    
    return Deque[f];
}

int getRear()
{
    if(f == -1 && r == -1)
    {
        cout<<"queue empty"<<endl;
        return -1;
    }
    
    return Deque[r];
}

void display()
{
    int i=f;

    while (i != r)
    {
        cout<<Deque[i]<<" ";
        i=(i+1)%n;
    }
    cout<<Deque[r]<<endl;
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