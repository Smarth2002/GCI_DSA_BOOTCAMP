////https://practice.geeksforgeeks.org/problems/friends-pairing-problem5425/1/


#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    void solve(string ip, string op, int& ans)
    {
        if(ip=="")
        {
            ans++;
            return;
        }
        
        for(int i =0; i< ip.size(); i++)
        {
            string ip1=ip;
            string op1=op;
            
            op1.push_back(ip1[0]);
            
            if(i > 0)
            {
                op1.push_back(ip1[i]);
                ip1.erase(ip1.begin()+i);
            }
            
            ip1.erase(ip1.begin()+0);
            
            solve(ip1, op1, ans);
        }
    }
        
    int countFriendsPairings(int n) 
    { 
        int ans=0;
        string ip="";
        
        for(int i=1; i<=n; i++)
            ip.push_back(i);
            
        string op="";
        
        solve(ip, op, ans);
        
        return ans % 1000000007;
    }
}; 