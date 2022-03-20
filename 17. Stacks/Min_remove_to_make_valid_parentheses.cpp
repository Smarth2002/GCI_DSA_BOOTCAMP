//https://leetcode.com/problems/minimum-remove-to-make-valid-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<char, int>> stk;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                stk.push({s[i], i});
            else if(s[i] == ')')
            {
                if(stk.empty())
                {
                    s.erase(i, 1);
                    i--;
                }
                else
                    stk.pop();
            }
        }
        
        while(!stk.empty())
        {
            s.erase(stk.top().second, 1);
            stk.pop();
        }
        
        return s;
    }
};