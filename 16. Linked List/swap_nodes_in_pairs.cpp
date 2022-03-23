//https://leetcode.com/problems/swap-nodes-in-pairs/

#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        ListNode* curr=head, *next=NULL, *prev=NULL;
        
        while(curr != NULL && curr->next != NULL)
        {
            next=curr->next;
            
            curr->next=next->next;
            next->next=curr;
            
            if(prev != NULL)
                prev->next=next;
            else
                head=next;
            
            prev=curr;
            curr=curr->next;
        }
        
        return head;
    }
};

 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* next=head->next;
        
        head->next=swapPairs(head->next->next);
        
        next->next=head;
        
        return next;
    }
};