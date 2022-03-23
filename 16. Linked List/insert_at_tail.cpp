//https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true

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

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    
    SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);
    
    SinglyLinkedListNode* temp=head;
    
    if(head == NULL)
    {
        head=newNode;
        return head;
    }
    
    while (temp->next != NULL) {
    temp=temp->next;
    }
    
    temp->next=newNode;
    
    return head;
}