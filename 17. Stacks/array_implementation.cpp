#include<bits/stdc++.h>
using namespace std;

#define MAX_SIZE 101
int a[MAX_SIZE];

int top=-1;

void push(int x)
{
    if(top == MAX_SIZE-1)
    {
        cout<<"stack overflow";
        return;
    }

    a[++top]=x;
    return;
}

void pop()
{
    if(top == -1)
    {
        cout<<"stack underflow";
        return;
    }

    top--;
    return;
}

int Top()
{
    return a[top];
}

void print()
{
    for (int i = 0; i <= top; i++)
    {
        cout<<a[i]<<" ";
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
    push(10);
    print();
    pop();
    print();
    push(12);
    print();

    return 0;
}