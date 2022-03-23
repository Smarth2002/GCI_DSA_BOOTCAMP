//https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true

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

int getNode1(SinglyLinkedListNode* llist, int positionFromTail)
{
    SinglyLinkedListNode *ptr1=llist, *ptr2=llist;

    for(int i=1; i<=positionFromTail; i++)
        ptr2=ptr2->next;
    
    while(ptr2->next != NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }

    return ptr1->data;
}

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {

    SinglyLinkedListNode* temp=llist;
    int count=0;
    
    while (temp != NULL) {
        temp=temp->next;
        count++;
    }
    
    int posFromHead=count-positionFromTail;
    temp=llist;
    
    for (int i=1; i<posFromHead; i++) {
        temp=temp->next;
    }
    
    return temp->data;
}