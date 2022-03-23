#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

Node* head;

Node* getNewNode(int ele)
{
    Node* newNode=new Node();
    newNode->data=ele;
    newNode->next=NULL;
    newNode->prev=NULL;

    return newNode;
}

void insertAtHead(int ele)
{
    Node* newNode=getNewNode(ele);

    if(head == NULL)
    {
        head=newNode;
        return;
    }

    newNode->next=head;
    head->prev=newNode;
    head=newNode;

    return;
}

void insertAtTail(int ele)
{
    Node* newNode=getNewNode(ele);

    if(head == NULL)
    {
        head=newNode;
        return;
    }

    Node* temp=head;

    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    
    temp->next=newNode;
    newNode->prev=temp;

    return;
}

void Delete(int n)
{
    Node* temp=head;

    for (int i = 1; i < n; i++)
    {
        temp=temp->next;
    }
    
    if(temp == head) //(n == 1)
        head=temp->next;
    
    if(temp->prev != NULL)
        temp->prev->next=temp->next;
    if(temp->next != NULL)
        temp->next->prev=temp->prev;
    
    delete temp;

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

void revPrint()
{
    if(head == NULL)
        return;

    Node* temp=head;

    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    
    cout<<endl;
    return;
}

int main()
{
    head=NULL;

    insertAtHead(2);
    print();
    revPrint();

    insertAtHead(4);
    print();
    revPrint();

    insertAtHead(6);
    print();
    revPrint();

    insertAtTail(3);
    insertAtTail(5);
    insertAtTail(7);

    print();
    
    Delete(6);
    print();

    Delete(1);
    print();

    return 0;
}