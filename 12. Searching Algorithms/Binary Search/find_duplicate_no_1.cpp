//https://leetcode.com/problems/find-the-duplicate-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        
        int start=0, end=nums.size()-1;
        int mid, ans;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(mid+1 <= nums[mid])
                start=mid+1;
            else
            {
                ans=nums[mid];           
                end=mid-1;
            }
        }
        
        return ans;;
    }
};