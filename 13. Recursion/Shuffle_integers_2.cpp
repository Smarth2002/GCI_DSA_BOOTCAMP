//https://practice.geeksforgeeks.org/problems/shuffle-integers2401/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	
	
	
	public:
	
	void solve(int ans[], int left[], int right[], int l, int r, int i, int mid)
	{
	    if(i == 2*mid)
	        return;
	    
	    if(l == r)
	    {
	        ans[i]=left[l];
	        solve(ans, left, right, l+1, r, i+1, mid);
	    }
	    else
	    {
	        ans[i]=right[r];
	        solve(ans, left, right, l, r+1, i+1, mid);
	    }
	    
	    return;
	}
	
	void shuffleArray(int arr[],int n)
	{
	    int ans[n];
	    int left[n/2];
	    int right[n/2];
	    int mid=n/2;
	    
	    for(int i = 0; i < n/2; i++)
	    {
	        left[i]=arr[i];
	    }
	    for(int i = mid; i < n; i++)
	    {
	        right[i-mid]=arr[i];
	    }
	    
	    int l=0, r=0, i=0;
	    
	    solve(ans, left, right, l, r, i, mid);
	    
	    for(int i = 0; i < n; i++)
	    {
	        arr[i]=ans[i];
	    }
	    
	    return;
	}
		 

};