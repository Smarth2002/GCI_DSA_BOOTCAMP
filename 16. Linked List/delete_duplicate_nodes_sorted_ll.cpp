//https://www.hackerrank.com/challenges/delete-duplicate-value-nodes-from-a-sorted-linked-list/problem?isFullScreen=true

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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* temp=llist;
    
    while (temp->next != NULL) {
        
        while ((temp->next != NULL) && (temp->next->data == temp->data))
        {
            
            temp->next=temp->next->next;
            free (temp->next);
        }
        
        if(temp->next == NULL)
            break;
        temp=temp->next;
    }
    
    return llist;
}