//https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

#include<bits/stdc++.h>
using namespace std;


int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
{
    int count=0;
    
    sort(arr2.begin(), arr2.end());
    
    for(int i = 0; i < arr1.size(); i++)
    {
        int start=0, end=arr2.size()-1;
        int mid;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(arr2[mid] == arr1[i])
            {
                start=mid;
                end=mid;
                break;
            }
            else if(arr1[i] < arr2[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        
        if(start < arr2.size() && abs(arr1[i] - arr2[start]) <= d) //checking min diff by 2 nearest elements of arr1[i] in arr2
            continue;
        else if(end >= 0 && abs(arr1[i] - arr2[end]) <= d)
            continue;
        else
            count++;
    }
    
    return count;
}
