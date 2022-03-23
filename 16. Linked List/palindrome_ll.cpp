//https://leetcode.com/problems/palindrome-linked-list/

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
    
    bool solve(ListNode** left, ListNode* right)
    {
        if(right == NULL)
            return true;
        
        bool isP=solve(left, right->next);
        
        if(isP == false)
            return false;
        
        if((*left)->val != right->val)
            return false;
        else
        {
            (*left)=(*left)->next;
            return true;
        }
    }
    
    bool isPalindrome(ListNode* head) {
        
        return solve(&head, head);
    }
};

class Solution {
public:
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* prev=NULL, *Next=NULL;
        
        while(head != NULL)
        {
            Next=head->next;
            head->next=prev;
            
            prev=head;
            head=Next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head, *fast=head;
        
        while(fast != NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast != NULL)
            slow=slow->next;
        
        ListNode* revHead=reverse(slow);
        ListNode* stHead=head;
        
        while(revHead != NULL)
        {
            if(revHead->val != stHead->val)
                return false;
            revHead=revHead->next;
            stHead=stHead->next;
        }
        
        return true;
    }
};

class Solution {
public:
    
    bool isPalindrome(ListNode* head) {
        
        ListNode* slow=head, *fast=head;
        vector<int> v;
        
        while(fast != NULL && fast->next != NULL)
        {
            v.push_back(slow->val);
            slow=slow->next;
            fast=fast->next->next;
        }
        
        if(fast != NULL)
            slow=slow->next;
        
        int i=v.size();
        
        while(slow != NULL)
        {
            if(slow->val != v[i-1])
                return false;
            slow=slow->next;
            i--;
        }
        
        return true;
    }
};

class Solution {
public:
    
    void solve(ListNode* head, string& str1, string& str2)
    {
        if(head == NULL)
            return;
        
        str1+=(head->val);
        
        solve(head->next, str1, str2);
        
        str2+=(head->val);
        
        return;
    }
    
    bool isPalindrome(ListNode* head) {
        
        string str1="", str2="";
        
        solve(head, str1, str2);
        
        if(str1 == str2)
            return true;
        else 
            return false;
    }
};