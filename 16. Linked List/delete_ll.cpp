//https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true

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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {

SinglyLinkedListNode* temp=llist;

if(position == 0)
{
    llist=temp->next;
    delete temp;
    return llist;
}

for (int i=1; i < position; i++) {
temp=temp->next;
}

temp->next=temp->next->next;

delete temp;
return llist;
}