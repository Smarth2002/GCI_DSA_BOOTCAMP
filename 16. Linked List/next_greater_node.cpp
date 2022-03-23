//https://leetcode.com/problems/next-greater-node-in-linked-list/

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
    vector<int> nextLargerNodes(ListNode* head) {
        
        ListNode* temp1=head, *temp2=NULL;
        vector<int> ans;
        
        while(temp1 != NULL)
        {
            temp2=temp1->next;
            
            while(temp2 != NULL)
            {
                if(temp2->val > temp1->val)
                {
                    ans.push_back(temp2->val);
                    break;
                }
                
                temp2=temp2->next;
            }
            
            if(temp2 == NULL)
                ans.push_back(0);
            
            temp1=temp1->next;
        }
        
        return ans;
    }
};