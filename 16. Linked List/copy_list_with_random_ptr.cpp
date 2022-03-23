//https://leetcode.com/problems/copy-list-with-random-pointer/

#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

 class Solution {
public:
    
    Node* copyRandomList(Node* head) {
        
        Node* newHead=NULL;
        Node* curr=head, *newCurr=newHead;
        
        while(curr != NULL)
        {
            Node* newNode=new Node(curr->val);
            
            if(newHead == NULL)
                newHead=newNode;      
            else
                newCurr->next=newNode;
            
            newCurr=newNode;
            curr=curr->next;
        }
        
        Node* temp=NULL;
        curr=head, newCurr=newHead;
        int pos;
        
        while(curr != NULL)
        {
            pos=0; 
            
            if(curr->random == NULL)
                newCurr->random=NULL;
            else
            {
                temp=head;
                
                while(temp != curr->random)
                {
                    pos++;
                    temp=temp->next;
                }
                
                temp=newHead;
                
                while(pos--)
                    temp=temp->next;
                
                newCurr->random=temp;
            }
               
            curr=curr->next;
            newCurr=newCurr->next;
        }
        
        return newHead;
    }
};

class Solution {
public:
    
    Node* copyRandomList(Node* head) {
        
        if(head == NULL)
            return head;
        
        Node* curr=head, *newNode;
        
        while(curr != NULL)
        {
            newNode=new Node(curr->val);
            
            newNode->next=curr->next;
            curr->next=newNode;
            
            curr=curr->next->next;
        }
        
        curr=head;
        
        while(curr != NULL)
        {
            if(curr->random == NULL)
                curr->next->random=NULL;
            else
                curr->next->random=curr->random->next;
            
            curr=curr->next->next;
        }
        
        Node* newHead=head->next;
        
        Node* oldCurr=head, *newCurr=newHead;
        
        while(oldCurr != NULL)
        {
            oldCurr->next=newCurr->next;
            
            if(newCurr->next != NULL)
                newCurr->next=newCurr->next->next;
            else
                newCurr->next=NULL;
            
            oldCurr=oldCurr->next;
            newCurr=newCurr->next;
        }
        
        return newHead;
    }
};

class Solution {
public:
    
    Node* copyRandomList(Node* head) {
        
        if(head == NULL)
            return NULL;
        Node* curr=head, *newNode;
        
        while(curr != NULL)
        {
            newNode=new Node(curr->val);
            
            newNode->next=curr->random;
            curr->random=newNode;
            
            curr=curr->next;
        }
        
        curr=head;
        Node* currNew;
        
        while(curr != NULL)
        {
            currNew=curr->random;
            
            if(currNew->next != NULL)
                currNew->random=currNew->next->random;
            
            curr=curr->next;
        }
        
        curr=head;
        Node* newHead=curr->random;
        
        while(curr != NULL)
        {
            currNew=curr->random;
            
            curr->random=currNew->next;
            
            if(curr->next == NULL)
                currNew->next=NULL;
            else
            currNew->next=curr->next->random;
            
            curr=curr->next;
        }
        
        return newHead;
    }
};