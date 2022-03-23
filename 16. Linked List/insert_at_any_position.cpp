//https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?isFullScreen=true

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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* newNode=new SinglyLinkedListNode(data);

if(position == 0)
{
    newNode->next=llist;
    llist=newNode;
    return llist;
}

SinglyLinkedListNode* temp=llist;

for (int i=1; i<=position-1; i++) {
temp=temp->next;
}

newNode->next=temp->next;
temp->next=newNode;

return llist;
}