//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1

//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        vector<int> res;
/*
maintain list of 1st (k-1) elements 
the nkeep adding 1 ele and maintaining list for all remaining elements
*/

        for(int i=0; i<k-1; i++)
        {
            while(!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();
            dq.push_back(i);
        }
        
        for(int i=k-1; i<n; i++) //get end elements of all windows one by one
        {
            while(!dq.empty() && arr[dq.back()] <= arr[i]) //either deque becomes empty or curr ele become smaller than prev
                dq.pop_back();
            dq.push_back(i);
            
            if(dq.front() > i-k) //lie in window range
                res.push_back(arr[dq.front()]);
            else //if not then remove 1st ele in list and 2nd one is ans
            {
                dq.pop_front();
                res.push_back(arr[dq.front()]);
            }
        }
        
        return res;
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends