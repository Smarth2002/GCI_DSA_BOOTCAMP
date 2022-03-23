#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* A;

void insert(int element, int pos)
{
    Node* temp1=new Node();
    temp1->data=element;
    temp1->next=NULL;

    if(pos == 1)
    {       
        temp1->next=A;
        A=temp1;

        return;
    }

    Node* temp2=A;

    for (int i = 1; i <= pos-2; i++)
    {
        temp2=temp2->next;
    }
    
    temp1->next=temp2->next;
    temp2->next=temp1;

    return;
}

void print()
{
    Node* temp=A;

    while (temp != 0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return;
}

int main()
{
    A=NULL;

    int n;
    cin>>n;

    int element, pos;

    for (int i = 0; i < n; i++)
    {
        cin>>element;
        cin>>pos;
        insert(element, pos);
    }
    
    print();

    return 0;
}