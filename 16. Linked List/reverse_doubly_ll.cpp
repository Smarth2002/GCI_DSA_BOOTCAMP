//https://www.hackerrank.com/challenges/reverse-a-doubly-linked-list/problem?isFullScreen=true

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

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {

    DoublyLinkedListNode* temp=llist;
    DoublyLinkedListNode* aux=NULL;
    
    while (temp->next != NULL) {
        
        aux=temp->prev;
        temp->prev=temp->next;
        temp->next=aux;
        
        temp=temp->prev;
    }
    
    aux=temp->prev;
    temp->prev=temp->next;
    temp->next=aux;
    
    llist=temp;
    
    return llist;
}