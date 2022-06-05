//https://practice.geeksforgeeks.org/problems/shuffle-integers2401/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		
	public:
	
	void solve(int arr[], int ans[], int l, int r, int i, int n)
	{
	    if(r == n)
	        return;
	    
	    if(r == n/2 + l)
	    {
	        ans[i]=arr[l];
	        solve(arr, ans, l+1, r, i+1, n);
	    }
	    else
	    {
	        ans[i]=arr[r];
	        solve(arr, ans, l, r+1, i+1, n);
	    }
	    
	    return;
	}
	
	void shuffleArray(int arr[],int n)
	{
	    int ans[n];
	    
	    int l=0, r=n/2, i=0;
	    
	    solve(arr, ans, l, r, i, n);
	    
	    for(int i = 0; i < n; i++)
	    {
	        arr[i]=ans[i];
	    }
	    
	    return;
	}
		 

};