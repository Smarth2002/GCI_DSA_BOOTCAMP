//https://practice.geeksforgeeks.org/problems/generate-binary-numbers-1587115620/1#

#include<bits/stdc++.h>
using namespace std;

vector<string> generate(int N)
{
	// Your code here
	vector<string> res;
	
	for(int i=1; i<=N; i++)
	{
	    int copy=i;
	    string s="";
	    
	    while(copy != 0)
	    {
	        if(copy&1 == 1)
	            s+='1';
	        else
	            s+='0';
            copy=copy>>1;
	    }
	    
	    reverse(s.begin(), s.end());
	    res.push_back(s);
	}
	
	return res;
}
