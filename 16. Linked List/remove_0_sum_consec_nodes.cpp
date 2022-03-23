//https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/

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
    ListNode* removeZeroSumSublists(ListNode* head) {
        
        ListNode* prev=NULL, *end=head;
        long int sum=0;
        
        while(end != NULL)
        {
            sum=sum+end->val;
            
            if(sum == 0)
            {
                head=end->next;
                sum=0;
            }
            
            end=end->next;
        }
        
        prev=head;
        
        while(prev != NULL && prev->next != NULL)
        {
            sum=0;
            end=prev->next;
            
            while(end != NULL)
            {
                sum=sum+end->val;
                
                if(sum == 0)
                    prev->next=end->next;
                
                end=end->next;
            }
            
            prev=prev->next;
        }
        
        return head;
    }
};