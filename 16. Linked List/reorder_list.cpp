//https://leetcode.com/problems/reorder-list/

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
    
    void solve(ListNode** left, ListNode* right)
    {
        if(right == NULL)
            return;
            
        solve(left, right->next);
        
        if((*left)->next == right || *left == right)
        {
            right->next=NULL;
            return;
        }
        
        right->next=(*left)->next;
        ListNode* aux=(*left)->next;
        (*left)->next=right;
        (*left)=aux;
          
        return;
    }
    
    void reorderList(ListNode* head) {
        
        ListNode* slow=head, *fast=head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* right=slow, *left=head;
        
        solve(&left, right);
    }
};

class Solution {
public:
    
    void reorderList(ListNode* head) {
        
        ListNode* slow=head, *fast=head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ListNode* curr=slow, *prev=NULL, *next=NULL;
        
        while(curr != NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        
        ListNode* revHead=prev;
        
        ListNode* left=head, *right=revHead;
        
        while(left != right && left->next != right)
        {
            ListNode* newLeft=left->next, *newRight=right->next;
            
            left->next=right;
            right->next=newLeft;
            
            left=newLeft;
            right=newRight;
        }
    }
};