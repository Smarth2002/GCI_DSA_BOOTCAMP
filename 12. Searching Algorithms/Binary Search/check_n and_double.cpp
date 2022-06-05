//https://leetcode.com/problems/check-if-n-and-its-double-exist/

#include<bits/stdc++.h>
using namespace std;

bool checkIfExist(vector<int>& arr) 
{
    sort(arr.begin(), arr.end());
    
    for(int i = 0; i < arr.size()-1; i++)
    {
        int start=i+1, end=arr.size()-1;
        int mid;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(arr[mid] == 2 * arr[i] || arr[mid] * 2 == arr[i])
                return true;
            else if(2 * arr[i] > arr[mid] || arr[i] > 2 * arr[mid])
                start=mid+1;
            else
                end=mid-1;
        }
    }
    
    return false;
}