//https://www.geeksforgeeks.org/print-all-combinations-of-balanced-parentheses/

#include<bits/stdc++.h>
using namespace std;

void solve(string op, vector<string>& ans, int open, int close)
{
    if(open == 0 && close == 0)
    {
        ans.push_back(op);
        return;
    }
    
    if(open != 0)
    {
        string op1=op;
        op1.push_back('(');

        solve(op1, ans, open-1, close);        
    }

    if(open != close)
    {
        string op1=op;
        op1.push_back(')');

        solve(op1, ans, open, close-1);
    }

    return;
}

vector<string> balancedParenthesis(int n)
{
    string op="";
    vector<string> ans;
    int open=n;
    int close=n;

    solve(op, ans, open, close);    

    return ans;
}

int main()
{
    int n=3;
    vector<string> ans=balancedParenthesis(n);

    for(int i=0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }

    return 0;
}