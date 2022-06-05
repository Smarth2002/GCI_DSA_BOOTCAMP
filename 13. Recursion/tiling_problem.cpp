//https://practice.geeksforgeeks.org/problems/ways-to-tile-a-floor5836/1/

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
    void solve(int j, int N, long long int& ans)
    {
        if(j == N+1 || j == N)
        {
            ans++;
            return;
        }
        
        solve(j+1, N, ans);
        
       // if(j+2 <= N+1)
            solve(j+2, N, ans);
        
    }
  
    long long numberOfWays(long long N) {
        
        long long int ans=0;
        int j=1;
        
        solve(j, N, ans);
        
        return ans % 1000000007;
    }
};