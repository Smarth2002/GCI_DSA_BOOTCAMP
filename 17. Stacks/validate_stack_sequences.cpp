//https://leetcode.com/problems/validate-stack-sequences/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int i=0, j=0;
        
        stack<int> s;
        
        while(j < popped.size())
        {
            if(!s.empty() && s.top() == popped[j])
            {
                s.pop();
                j++;
            }
            else
            {
                if(i == pushed.size())
                    return false;
                s.push(pushed[i]);
                i++;
            }
        }
        
        if(s.empty())
            return true;
        else
            return false;
    }
};

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int top=0, j=0;
        
        while(j < popped.size())
        {
            if(top!=-1 && pushed[top] == popped[j])
            {
                pushed.erase(pushed.begin()+top);
                top--;
                j++;
            }
            else
            {
                if(top == pushed.size())
                    return false;
                top++;
            }
        }
        
        if(pushed.size() == 0)
            return true;
        else
            return false;
            
    }
};