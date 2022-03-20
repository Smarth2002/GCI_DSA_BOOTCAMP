#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head=NULL;

void reverse()
{
    if(head == NULL)
        return;
        
    stack<Node*> s;

    Node* temp=head;

    while (temp != NULL)
    {
        s.push(temp);
        temp=temp->next;
    }

    head=s.top();
    s.pop();

    temp=head;

    while(!s.empty())
    {
        temp->next=s.top();
        temp=temp->next;
        s.pop();
    }

    temp->next=NULL;
    return;
}

void print()
{
    Node* temp=head;

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
    Node* temp=new Node();
    head=temp;
    temp->data=2;
    temp->next=NULL;

    temp=new Node();
    temp->data=4;
    temp->next=NULL;
    head->next=temp;

    temp=new Node();
    temp->data=6;
    temp->next=NULL;
    head->next->next=temp;

    reverse();

    print();

    return 0;
}