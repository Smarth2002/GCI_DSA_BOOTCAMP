//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	
	    void solve(string ip, string op, vector<string>& ans)
	    {
	        if(ip == "")
	        {
	            ans.push_back(op);
	            return;
	        }
	        
	        for(int i=0; i<ip.size();i++)
	        {
	            string op1=op;
	            op1.push_back(ip[i]);
	            string ip1=ip;
	            ip1.erase(ip1.begin()+i);
	            solve(ip1, op1, ans);
	            
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    
		    string op="";
		    
		    solve(S, op, ans);
		    
		    sort(ans.begin(), ans.end());
		    
		    return ans;
		}
};
