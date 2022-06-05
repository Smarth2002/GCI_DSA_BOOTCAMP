//https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/

#include<bits/stdc++.h>
using namespace std;

int specialArray(vector<int>& nums) 
{
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i <= nums.size(); i++)
    {
        int start=0, end=nums.size()-1;
        int mid, pos=-1;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(nums[mid] >= i)
            {
                pos=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        
        if(nums.size()-pos == i)
            return i;
    }
    
    return -1;
}