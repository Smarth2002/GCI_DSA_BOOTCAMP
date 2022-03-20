//https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        
        int res;
        int min=INT_MAX;
        int sum=0;
        
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            
            if(sum < min)
                min=sum;
        }
        
        if(min < 0)
            res=-min+1;
        else
            res=1;
        
        return res;
    }
};