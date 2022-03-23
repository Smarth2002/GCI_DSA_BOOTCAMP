//https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true

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

bool has_cycle(SinglyLinkedListNode* head) {
    
    SinglyLinkedListNode* slow=head, *fast=head;
    
    while (fast != NULL && fast->next != NULL) {
        
        slow=slow->next;
        fast=fast->next->next;
        
        if(slow == fast)
            return 1;
    }
    
    return 0;
}