//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/problem?isFullScreen=true

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

void revPrint(SinglyLinkedListNode* head)
{
    if(head == NULL)
        return;
        
    revPrint(head->next);
    
    cout<<head->data<<endl;
    
    return;
}

void reversePrint(SinglyLinkedListNode* llist) {
    
    SinglyLinkedListNode* temp=llist;
    
    revPrint(llist);
    
    return;
}