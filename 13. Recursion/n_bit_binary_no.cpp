//https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

#include<bits/stdc++.h>
using namespace std;

void solve(int n, string op, int ones, int zeroes, vector<string>& ans)
{
    if(n == 0)
    {
        ans.push_back(op);
        return;
    }

    string op1=op;
    op1.push_back('1');
    solve(n-1, op1, ones+1, zeroes, ans);

    if(ones != zeroes)
    {
        string op2=op;
        op2.push_back('0');
        solve(n-1, op2, ones, zeroes+1, ans);
    }

    return;
}

vector<string> nBit(int n)
{
    string op="";
    int ones=0, zeroes=0;
    vector<string> ans;

    solve(n, op, ones, zeroes, ans);

    return ans;
}

int main()
{
    int n=2;

    vector<string> v=nBit(n);

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    
    return 0;
}