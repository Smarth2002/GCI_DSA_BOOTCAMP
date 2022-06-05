//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/

#include<bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int>& nums, int target) 
{
    vector<int> ans;
    
    int start=0, end=nums.size()-1;
    int mid;
    
    int pos=-1;
    
    while(start <= end)
    {
        mid=start+(end-start)/2;
        
        if(nums[mid] == target)
        {
            pos=mid;
            end=mid-1;
        }
        else if(target < nums[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    
    ans.push_back(pos);
    
    start=0, end=nums.size()-1;
    pos=-1;
    
    while(start <= end)
    {
        mid=start+(end-start)/2;
        
        if(nums[mid] == target)
        {
            pos=mid;
            start=mid+1;
        }
        else if(target < nums[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    
    ans.push_back(pos);
    
    return ans;
}