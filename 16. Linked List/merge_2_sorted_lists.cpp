//https://leetcode.com/problems/merge-two-sorted-lists/

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        
        if(list1->val <= list2->val)
        {
            list1->next=mergeTwoLists(list1->next, list2);
            return list1;
        }
        else
        {
            list2->next=mergeTwoLists(list1, list2->next);
            return list2;
        }
        
    }
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* head=NULL, *temp1=list1, *temp2=list2, *curr=NULL;
        
        if(list1 == NULL && list2 == NULL)
                return head;
        else if(list1 == NULL)
            return list2;
        else if(list2 == NULL)
            return list1;
        
        if(list1->val <= list2->val)
        {
            head=list1;
            temp1=temp1->next;
        }
        else
        {
            head=list2;
            temp2=temp2->next;
        }
        
        curr=head;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            if(temp1->val <= temp2->val)
            {
                curr->next=temp1;
                temp1=temp1->next;
            }
            else
            {
                curr->next=temp2;
                temp2=temp2->next;
            }
            
            curr=curr->next;
        }
        
        if(temp1 == NULL)
            curr->next=temp2;
        else if(temp2 == NULL)
            curr->next=temp1;
    
        return head;
        
    }
};