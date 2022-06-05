//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int start=0, end=nums.size()-1;
        int mid;
        
        while(start <= end)
        {
            if(nums[start] <= nums[end])
                return nums[start];
            
            mid=start+(end-start)/2;
            
            int prev=(mid+nums.size()-1)%nums.size();
            int next=(mid+1)%nums.size();
            
            if(nums[mid] < nums[prev] && nums[mid] < nums[next])
                return nums[mid];
            else if(nums[start] <= nums[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        
        return -1;
    }
};