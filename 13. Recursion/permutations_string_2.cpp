//https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/#

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
	    
	    void solve(string s, int l, int r, vector<string>& ans)
	    {
	        if(l == r)
	        {
	           ans.push_back(s);
	           return;
	        }
	       
	        for(int i=l; i<=r; i++)
	        {   
	            swap(s[i], s[l]);
	            
	            solve(s, l+1, r, ans);
	            
	            swap(s[i], s[l]);
	        }
	    }
	
		vector<string>find_permutation(string S)
		{
		    vector<string> ans;
		    
		    int l=0, r=S.size()-1;
		    
		    solve(S, l, r, ans);
		    
		    sort(ans.begin(), ans.end());
		    
		    return ans;
		}
};