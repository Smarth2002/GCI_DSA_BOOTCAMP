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
}

void reverse(Node* temp)
{
    if(temp->link == NULL)
    {
        head=temp;
        return;
    }

    reverse(temp->link);

    Node* next=temp->link;
    next->link=temp;
    temp->link=NULL;

    return;
}

int main()
{
    head=NULL;

    insert(2);
    insert(6);
    insert(5);
    insert(4);

    print();

    reverse(head);

    print();

    return 0;
}