//https://leetcode.com/problems/valid-parenthesis-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        
        stack<char> open;
        stack<char> star;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
                open.push(i);
            else if(s[i] == '*')
                star.push(i);
            else if(s[i] == ')')
            {
                if(open.empty() && star.empty())
                    return false;
                else if(!open.empty())
                    open.pop();
                else
                    star.pop();
            }
        }
        
        while(!open.empty())
        {
            if(star.empty())
                return false;
            
            if(star.top() > open.top())
            {
                star.pop();
                open.pop();
            }
            else
                return false;
        }
        
        return true;
    }
};

class Solution {
public:
    bool checkValidString(string s) {
        
        int cmax=0, cmin=0;
        
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '(')
            {
                cmax++;
                cmin++;
            }
            else if(s[i] == ')')
            {
                cmax--;
                cmin--;
            }
            else if(s[i] == '*')
            {
                cmax++;
                cmin--;
            }
            
            if(cmax < 0)
                return false;
            
            if(cmin < 0)
                cmin=0;
        }
        
        if(cmin == 0)
            return true;
        return false;
    }
};