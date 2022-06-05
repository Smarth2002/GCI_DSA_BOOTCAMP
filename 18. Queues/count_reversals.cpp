//https://practice.geeksforgeeks.org/problems/count-the-reversals/0

#include<bits/stdc++.h>
using namespace std;

int countRev (string s);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        cout << countRev (s) << '\n';
    }
}

// Contributed By: Pranay Bansal// } Driver Code Ends



int countRev (string s)
{
    // your code here
    stack<char> stk;
    int cnt=0;
    
    if(s.size() % 2 != 0)
        return -1;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '{')
            stk.push(s[i]);
        else
        {
            if(stk.empty())
            {
                stk.push('{');
                cnt++;
            }
            else if(stk.top() == '{')
                stk.pop();
        }
    }
    
    
    if(stk.empty())
        return cnt;
    else
        return (cnt+(stk.size()/2));
        
}

//ALTERNATIVE

int countRev (string s)
{
    // your code here
    
    if(s.size() & 2 != 0)
        return -1;
        
    int open=0, close=0, cnt=0;
    
    for(int i=0; i<s.size(); i++)
    {
        if(s[i] == '{')
            open++;
        else
            close++;
        
        if(close > open)
        {
            open++;
            close--;
            cnt++;
        }
    }
        //return open;
    return cnt+((open-close)/2);
}