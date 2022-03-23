//https://leetcode.com/problems/intersection-of-two-linked-lists/

#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {
public:
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *ptrA=headA, *ptrB=headB;
        
        while(ptrA != ptrB)
        {
            if(ptrA == NULL)
                ptrA=headB;
            else
                ptrA=ptrA->next;
            
            if(ptrB == NULL)
                ptrB=headA;
            else
                ptrB=ptrB->next;      
        }
        
        return ptrA;
    }
};

class Solution {
public:
    
    int getSize(ListNode* head)
    {
        int count=0;
        
        while(head != NULL)
        {
            count++;
            head=head->next;
        }
        
        return count;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* temp1=headA, *temp2=headB;
        
        int sizeA=getSize(headA);
        int sizeB=getSize(headB);
        
        if(sizeA >= sizeB)
            for(int i=1; i<=sizeA-sizeB; i++)
                temp1=temp1->next;
        else
            for(int i=1; i<=sizeB-sizeA; i++)   
                temp2=temp2->next;
        
        while(temp1 != NULL)
        {
            if(temp1 == temp2)
                return temp1;
            
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        return NULL;
    }
};