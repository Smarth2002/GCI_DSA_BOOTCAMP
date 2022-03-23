//https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem?isFullScreen=true

#include<bits/stdc++.h>
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

void printLinkedList(SinglyLinkedListNode* head) {

SinglyLinkedListNode* temp=head;

while (temp != NULL) {
    
    cout<<temp->data<<endl;
    temp=temp->next;
}

return;
}