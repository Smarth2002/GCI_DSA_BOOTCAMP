//https://practice.geeksforgeeks.org/problems/juggler-sequence3930/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    void solve(int n, vector<int>& ans)
    {
        if(n == 1)
        {
            ans.push_back(n);
            return;
        }
        
        if(n % 2 == 0)
        {
            ans.push_back(n);
            
            n=pow(n, 0.5);
            
            solve(n, ans);
        }
        else
        {
            ans.push_back(n);
            
            n=pow(n, 1.5);
            
            solve(n, ans);
        }
        
        return;
    }

    vector<int> jugglerSequence(int N){
        vector<int> ans;
        
        solve(N, ans);
        
        return ans;
    }
};