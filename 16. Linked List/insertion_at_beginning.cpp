#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* A=NULL;

void insert(int element)
{
    Node* temp=new Node();

    temp->data=element;
    temp->next=A;

    A=temp;
}

void print()
{
    Node* temp=A;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    cout<<endl;
}

int main()
{
    int n;
    cin>>n;

    int element;

    for (int i = 0; i < n; i++)
    {
        cin>>element;

        insert(element);
        print();
    }
    
    return 0;
}