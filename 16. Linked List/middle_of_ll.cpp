//https://leetcode.com/problems/middle-of-the-linked-list/

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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp=head;
        vector<ListNode*> address;
        
        while(temp!= NULL)
        {
            address.push_back(temp);
            temp=temp->next;
        }
        
        return address[address.size()/2];
    }
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        ListNode* temp=head;
        int count=0;
        
        while(temp != NULL)
        {
            count++;
            temp=temp->next;
        }
        
        temp=head;
        
        for(int i=1; i<=count/2; i++)
        {
            temp=temp->next;
        }
        
        return temp;
    }
};