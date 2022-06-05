//https://practice.geeksforgeeks.org/problems/subset-sums2234/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void solve(vector<int> arr, int op, vector<int>& ans)
    {
        if(arr.size() == 0)
        {
            ans.push_back(op);
            return;
        }
        
        int op1=op;
        int op2=op;
        
        op2+=arr[0];
        arr.erase(arr.begin()+0);
        
        solve(arr, op1, ans);
        solve(arr, op2, ans);
        
        return;
    }

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        
        int op=0;
        
        solve(arr, op, ans);
        
        return ans;
    }
};