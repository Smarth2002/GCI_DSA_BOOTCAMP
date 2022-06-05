//https://practice.geeksforgeeks.org/problems/print-all-possible-strings/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include<bits/stdc++.h>
using namespace std;

void solve(char str[], string op, int index, vector<string>& ans)
{
    if(str[index] == '\0')
    {
        ans.push_back(op);
        return;
    }
    
    string op1=op;
    string op2=op;
    
    op1.push_back(str[index]);
    
    op2.push_back(' ');
    op2.push_back(str[index]);
    
    
    solve(str, op1, index+1, ans);
    solve(str, op2, index+1, ans);
}

vector<string>  spaceString(char str[])
{
    vector<string> ans;
    string op="";
    
    op.push_back(str[0]);
    
    int index=1;
    
    solve(str, op, index, ans);
    
    return ans;
}