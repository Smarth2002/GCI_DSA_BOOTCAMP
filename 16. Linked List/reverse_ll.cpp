//https://www.hackerrank.com/challenges/reverse-a-linked-list/problem?isFullScreen=true

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
SinglyLinkedListNode* solve(SinglyLinkedListNode* head, SinglyLinkedListNode* temp)
{
    if(temp->next == NULL)
    {
        head=temp;
        return head;
    }
    
    head=solve(head, temp->next);
    temp->next->next=temp;
    temp->next=NULL;
    
    return head;
}

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    
    llist=solve(llist, llist);
    
    return llist;
}