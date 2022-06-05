//https://leetcode.com/problems/minimum-size-subarray-sum

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {   
        int arrSum=0;
        
        for(int i = 0; i < nums.size(); i++)
            arrSum+=nums[i];
        
        if(arrSum < target)
            return 0;
        
        int sum=0, size=nums.size();
        
        for(int i = 0; i < nums.size(); i++)
        {
            int j=i;
            sum=0;
            
            while(j < nums.size())
            {
                sum+=nums[j];
                
                if(sum < target)
                    j++;
                else
                    break;
            }
            
            if(j < nums.size() && j-i+1 < size)
                size=j-i+1;
            
                        
            cout<<i<<" "<<j<<endl;
        }
        
        return size;
        
    }
};