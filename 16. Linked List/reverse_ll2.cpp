//https://leetcode.com/problems/reverse-linked-list-ii/

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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        
        ListNode* stL=head, *stR, *revL;
        
        if(left == 1)
        {
            stL=NULL;
            revL=head;
        }
        
        for(int i=1; i<=left-2; i++)
        {
            stL=stL->next;
        }
        
        if(stL != NULL)
            revL=stL->next;
        
        ListNode* curr=revL->next, *prev=revL, *next;
        
        for(int i=1; i<=right-left; i++)
        {
            next=curr->next;
            curr->next=prev;
            
            prev=curr;
            curr=next;
        }
        
        if(stL == NULL)
            head=prev;
        else
            stL->next=prev;
            
        revL->next=curr;
        
        return head;
    }
};