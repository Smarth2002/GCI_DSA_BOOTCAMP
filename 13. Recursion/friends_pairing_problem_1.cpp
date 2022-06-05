//https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1/

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    int solve(int n)
    {
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        
        return solve(n-1)+(n-1)*solve(n-2);
    }
        
    int countFriendsPairings(int n) 
    { 
        int ans=solve(n);
        
        return ans % 1000000007;
    }
};  