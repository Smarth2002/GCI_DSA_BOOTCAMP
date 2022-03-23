//https://leetcode.com/problems/merge-k-sorted-lists/

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* head=NULL, *curr=NULL;
        
        int pos=0, min=INT_MAX, i;
        
        while(true)
        {
            pos=-1, min=INT_MAX;
            
            for( i=0; i<lists.size(); i++)
            {
                if(lists[i] == NULL)
                    continue;
                if(lists[i]->val < min)
                {
                    min=lists[i]->val;
                    pos=i;
                }
            }
            
            if(pos == -1)
                break;

            if(head == NULL)
                head=lists[pos];
            else
                curr->next=lists[pos];

            curr=lists[pos];

            lists[pos]=lists[pos]->next;
            
            curr->next=NULL;
            
        }
        
        return head;
    }
};

 class Solution {
public:
    
    void merge(vector<ListNode*>& lists, int start, int end)
    {
        ListNode* ptr1=lists[start], *ptr2=lists[end], *head=NULL, *curr=NULL;
        
        while(ptr1 != NULL && ptr2 != NULL)
        {
            if(ptr1->val <= ptr2->val)
            {
                if(head == NULL)
                    head=ptr1;
                else
                    curr->next=ptr1;
                
                curr=ptr1;
                ptr1=ptr1->next;
            }
            else
            {
                if(head == NULL)
                    head=ptr2;
                else
                    curr->next=ptr2;
                
                curr=ptr2;
                ptr2=ptr2->next;
            }
        }
        
        if(ptr1 == NULL)
        {
            if(head == NULL)
                head=ptr2;
            else
                curr->next=ptr2;
        }
        else if(ptr2 == NULL)
        {
            if(head == NULL)
                head=ptr1;
            else
                curr->next=ptr1;
        }
        
        lists[start]=head;
        lists[end]=head;
        
        return;
    }
    
    void solve(vector<ListNode*>& lists, int start, int end)
    {
        if(start >= end)
            return;
        
        int mid=start+(end-start)/2;
        
        solve(lists, start, mid);
        solve(lists, mid+1, end);
        
        merge(lists, start, end);
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.size() == 0)
            return NULL;
        
        int start=0, end=lists.size()-1;
        
        solve(lists, start, end);
        
        return lists[0];
    }
};