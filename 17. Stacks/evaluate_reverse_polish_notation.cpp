//https://leetcode.com/problems/evaluate-reverse-polish-notation/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int oper2=s.top();
                s.pop();
                int oper1=s.top();
                s.pop();
                int res;
                
                if(tokens[i] == "+")
                    res=oper1+oper2;
                else if(tokens[i] == "-")
                    res=oper1-oper2;
                else if(tokens[i] == "*")
                    res=oper1*oper2;
                else
                    res=oper1/oper2;
                
                s.push(res);
            }
                
            else
            {
                int oper=stoi(tokens[i]);
                s.push(oper);
            }
        }
        
        int ans=s.top();
        return ans;
    }
};