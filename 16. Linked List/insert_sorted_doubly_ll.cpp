//https://www.hackerrank.com/challenges/insert-a-node-into-a-sorted-doubly-linked-list/problem?isFullScreen=true

#include <bits/stdc++.h>

using namespace std;

class DoublyLinkedListNode {
    public:
        int data;
        DoublyLinkedListNode *next;
        DoublyLinkedListNode *prev;

        DoublyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

DoublyLinkedListNode* insert(DoublyLinkedListNode* head, DoublyLinkedListNode* temp, int data){
    
    DoublyLinkedListNode* newNode=new DoublyLinkedListNode(data);
    newNode->prev=NULL;
    newNode->next=NULL;
    
    if(temp->data < data)
    {
        temp->next=newNode;
        newNode->prev=temp;
    }
    else{
        if (temp == head) {
        
        newNode->next=head;
        temp->prev=newNode;
        head=newNode;
        }
        else {
            DoublyLinkedListNode* prevNode=temp->prev;
            prevNode->next=newNode;
            newNode->prev=prevNode;
            
            temp->prev=newNode;
            newNode->next=temp;
        }
    } 
    
    return head;
}

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
    
    DoublyLinkedListNode* temp=llist;
    
    while (temp->next != NULL && temp->data < data) {
        
        temp=temp->next;
    }
    
    llist=insert(llist, temp,  data);
    return llist;
}