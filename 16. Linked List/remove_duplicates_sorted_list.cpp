//https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
        
        if(head == NULL || head->next == NULL)
            return head;
        
        head->next=deleteDuplicates(head->next);
        
        if(head->val == head->next->val)
                return head->next;
        else
            return head;
    }
};

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* temp=head, *aux=NULL;
        
        while(temp != NULL && temp->next != NULL)
        {
            if(temp->val == temp->next->val)
            {
                aux=temp->next;
                temp->next=temp->next->next;
                delete aux;
            }
            else
                temp=temp->next;
        }
        
        return head;
    }
};