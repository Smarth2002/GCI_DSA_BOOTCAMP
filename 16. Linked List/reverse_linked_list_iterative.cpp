#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* link;
};

Node* head;

void insert(int ele)
{
    Node* temp1=new Node();
    temp1->data=ele;
    temp1->link=NULL;

    if(head == NULL)
    {
        head=temp1;
        return;
    }

    Node* temp2=head;

    while (temp2->link != NULL)
    {
        temp2=temp2->link;
    }
    
    temp2->link=temp1;

    return;
}

void print()
{
    Node* temp=head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    
    cout<<endl;
    return;
}

void reverse()
{
    Node* curr=head;
    Node* prev=NULL;
    Node* next;

    while (curr != NULL)
    {
        next=curr->link;
        curr->link=prev;
        prev=curr;
        curr=next;
    }
    
    head=prev;

    return;
}

int main()
{
    insert(2);
    insert(4);
    insert(6);
    insert(5);

    print();

    reverse();

    print();

    return 0;
}