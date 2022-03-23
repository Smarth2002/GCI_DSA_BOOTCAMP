//https://leetcode.com/problems/delete-node-in-a-linked-list/

#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node->next;
        
        node->val=temp->val;
        
        node->next=temp->next;
        
        delete temp;
        
        return;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp=node;
        
        while(temp->next->next != NULL)
        {
            temp->val=temp->next->val;
            temp=temp->next;
        }
        
        temp->val=temp->next->val;
        temp->next=NULL;
        
        return;
    }
};