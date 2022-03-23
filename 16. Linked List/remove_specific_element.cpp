//https://leetcode.com/problems/remove-linked-list-elements/

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
    
    ListNode* removeElements(ListNode* head, int val) {
        
        if(head == NULL)
            return head;
        
        head->next=removeElements(head->next, val);
        
        if(head->val == val)
            return head->next;
        else
            return head;
    }
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode* prev=head;
        
        if(head == NULL)
            return head;
        
        if(head->val == val)
        {
            head=head->next;
        }
        
        
        while(prev->next != NULL)
        {
            if(prev->next->val == val)
            {
                if(prev->next == head)
                    head=head->next;
                prev->next=prev->next->next;
            }
            else
                prev=prev->next;
        }
        
        return head;
    }
};