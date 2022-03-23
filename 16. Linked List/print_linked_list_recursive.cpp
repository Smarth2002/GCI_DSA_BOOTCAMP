#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* insert(Node* head, int ele)
{
    Node* temp1=new Node();
    temp1->data=ele;
    temp1->next=NULL;

    if(head == NULL)
    {
        head=temp1;
        return head;
    }

    Node* temp2=head;

    while (temp2->next != NULL)
    {
        temp2=temp2->next;
    }
    
    temp2->next=temp1;

    return head;
}

void print(Node* head)
{
    if(head == NULL)
        return;
    
    cout<<head->data<<" ";

    print(head->next);

    return;
}

void print_rev(Node* head)
{
    if(head == NULL)
        return;

    print_rev(head->next);

    cout<<head->data<<" ";

    return;
}

int main()
{
    Node* head=NULL;
    
    head=insert(head, 2);
    head=insert(head, 6);
    head=insert(head, 5);
    head=insert(head, 4);

    print(head);
    cout<<endl;
    print_rev(head);

    return 0;
}