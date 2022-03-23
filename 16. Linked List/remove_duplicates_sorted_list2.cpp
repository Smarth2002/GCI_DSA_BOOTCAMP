//https://leetcode.com/problems/remove-duplicates-from-sorted-list-ii/

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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* prev=NULL, *curr=head;
        
        while(curr != NULL && curr->next != NULL)
        {
            if(curr->val == curr->next->val)
            {           
                while(curr->next != NULL && curr->val == curr->next->val)
                    curr=curr->next;
                
                if(prev == NULL)
                    head=curr->next;
                else
                    prev->next=curr->next;
                
            }
            else
            {
                if(prev == NULL) 
                    prev=head;
                else
                    prev=prev->next;  
            }
            
            curr=curr->next;
        }
        
        return head;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head == NULL || head->next == NULL )
            return head;
        
        if(head->val != head->next->val)
        {
            head->next=deleteDuplicates(head->next);
            return head;
        }
        else
        {
            ListNode* temp=head;
            
            while(temp != NULL && temp->val == head->val)
                temp=temp->next;
            
            return deleteDuplicates(temp);
        }
    }
};