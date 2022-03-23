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

    SinglyLinkedListNode* head=NULL;
    SinglyLinkedListNode* temp1=head1, *temp2=head2, *temp=head;
    SinglyLinkedListNode* newNode;
    
    while (temp1 != NULL && temp2 != NULL) {        
        
        if(temp1->data <= temp2->data)
        {
            newNode=new SinglyLinkedListNode(temp1->data);
            temp1=temp1->next;
        }
        else 
        {
            newNode=new SinglyLinkedListNode(temp2->data);
            temp2=temp2->next;
        }
        
        newNode->next=NULL;
        
        if(head == NULL)
            head=newNode;
        else
            temp->next=newNode;
        
        temp=newNode;
    }
    
    while (temp1 != NULL) {
        
        SinglyLinkedListNode* newNode=new SinglyLinkedListNode(temp1->data);
        newNode->next=NULL;
        
        if(head == NULL)
            head=newNode;
        else
            temp->next=newNode;
        
        temp1=temp1->next;
        temp=newNode;
    }
    
    while (temp2 != NULL) {
        
        SinglyLinkedListNode* newNode=new SinglyLinkedListNode(temp2->data);
        newNode->next=NULL;
        
        if(head == NULL)
            head=newNode;
        else
            temp->next=newNode;
        
        temp2=temp2->next;
        temp=newNode;
    }
    
    return head;
}