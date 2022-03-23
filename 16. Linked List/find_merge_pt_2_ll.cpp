//hackerrank.com/challenges/find-the-merge-point-of-two-joined-linked-lists/problem?isFullScreen=true

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

int findMergeNode1(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    SinglyLinkedListNode* temp1=head1, *temp2=head2;
    SinglyLinkedListNode* temp=NULL;
    
    while (temp1->next != NULL) {
    
        temp=temp1->next;
        temp1->next=NULL;
        temp1=temp;
    }
    
    while (temp2->next != NULL) {
        
        temp2=temp2->next;
    }
    
    return temp2->data;
}

int getSize(SinglyLinkedListNode* head){
    
    int count=0;
    
    while (head != NULL) {
        
        count++;
        head=head->next;
    }
    
    return count;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {

    int size1=getSize(head1);
    int size2=getSize(head2);
    
    SinglyLinkedListNode* ptr1=head1, *ptr2=head2;
    
    if(size1 >= size2){
        
        for (int i=1; i<=size1-size2; i++)             
            ptr1=ptr1->next;
        
    }
    else {
        
        for (int i=1; i<=size2-size1; i++) 
            ptr2=ptr2->next;
    }
    
    while (ptr1 != ptr2) {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    
    return ptr1->data;
}