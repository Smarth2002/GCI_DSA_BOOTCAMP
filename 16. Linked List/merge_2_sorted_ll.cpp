//https://www.hackerrank.com/challenges/merge-two-sorted-linked-lists/problem?isFullScreen=true
#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* temp1=head1, *temp2=head2;
    SinglyLinkedListNode* temp=NULL;
    SinglyLinkedListNode* head=NULL;
    
    if(temp1->data <= temp2->data)
    {
        head=temp1;
        temp=temp1;
        temp1=temp1->next;
    }
    else 
    {
        head=temp2;
        temp=temp2;
        temp2=temp2->next;
    }
    
    while (temp1 != NULL && temp2 != NULL) {
        
        if(temp1->data <= temp2->data)
        {
            temp->next=temp1;
            temp=temp1;
            temp1=temp1->next;           
        }
        else 
        {
            temp->next=temp2;
            temp=temp=temp2;
            temp2=temp2->next;
        }
    }
    
    if(temp1 != NULL)
        temp->next=temp1;
    
    else
        temp->next=temp2;
    
    return head;
}