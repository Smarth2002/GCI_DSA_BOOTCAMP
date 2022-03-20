//https://leetcode.com/problems/score-of-parentheses/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<pair<char, int>> stk;
        int res=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                stk.push({s[i], 0});
            else
            {
                int score;
                if(stk.top().second == 0)
                    score=1;
                else
                    score=2*(stk.top().second);
                
                stk.pop();
                
                if(stk.empty())
                    res+=score;
                else
                    stk.top().second+=score;
            }
        }
        
        return res;
    }
};

class Solution {
public:
    int scoreOfParentheses(string s) {
        
        int res=0, bal=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                bal++;
            else
            {
                bal--;
                if(s[i-1] == '(')
                    res+=pow(2, bal);
            }
        }
        
        return res;
    }
};