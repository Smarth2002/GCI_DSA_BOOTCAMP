//https://practice.geeksforgeeks.org/problems/count-all-possible-paths-from-top-left-to-bottom-right3011/1/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    
    void solve(int m, int n, int i, int j, long long int &ans)
    {
        if(i == m-1 || j == n-1)
        {
            ans++;
            return;
        }
        
        
        solve(m, n, i, j+1, ans);
        
        solve(m, n, i+1, j, ans);
        
    }
  
    long long int numberOfPaths(int m, int n){
        
        int i=0, j=0;
        long long int ans=0;
        
        solve(m, n, i, j, ans);
        
        return ans % 1000000007;
    }
};