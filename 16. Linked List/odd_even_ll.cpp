//https://leetcode.com/problems/odd-even-linked-list/

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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL)
            return head;
        
        ListNode* headOdd=head, *headEven=head->next;
        ListNode* odd=headOdd, *even=headEven;
        
        while(even != NULL && even->next != NULL)
        {
            odd->next=even->next;
            even->next=even->next->next;
            
            odd=odd->next;
            even=even->next;
        }
        
        odd->next=headEven;
        
        return headOdd;
    }
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode* head1=head, *head2=head->next;
        
        ListNode* curr=head, *next;
        
        while(curr->next != NULL)
        {
            next=curr->next;
            curr->next=next->next;
            
            curr=next;
        }
        
        ListNode* end1=head1;
        
        while(end1->next != NULL)
            end1=end1->next;
        
        end1->next=head2;
        
        return head1;
    }
};