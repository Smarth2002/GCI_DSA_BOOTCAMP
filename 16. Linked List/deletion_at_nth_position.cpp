#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

void insert(int element)
{
    Node* temp1=new Node();
    temp1->data=element;
    temp1->next=NULL;

    if(head == NULL)
    {
        head=temp1;
        return;
    }

    Node* temp2=head;

    while (temp2->next != NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;

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

void Delete(int n)
{
    Node* temp1=head;

    if(n == 1)
    {
        head=temp1->next;
        delete temp1;

        return;
    }

    for (int i = 1; i <= n-2; i++)
    {
        temp1=temp1->next;
    }
    
    Node* temp2=temp1->next;

    temp1->next=temp2->next;

    delete temp2;

    return;
}

int main()
{
    head=NULL;

    insert(2);
    insert(4);
    insert(6);
    insert(5);

    print();

    int n;
    cin>>n;

    Delete(n);

    print();

    return 0;
}