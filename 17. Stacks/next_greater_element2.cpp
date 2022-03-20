//https://leetcode.com/problems/next-greater-element-ii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> s;
        vector<int> res;
        
        for(int i=nums.size()-1; i>=0; i--)
        {
            s.push(nums[i]);
        }
        
        for(int i=nums.size()-1; i >=0; i--)
        {
            if(s.empty())
                res.push_back(-1);
            else if(s.top() > nums[i])
                res.push_back(s.top());
            else
            {
                while(!s.empty() && s.top() <= nums[i])
                    s.pop();
                
                if(s.empty())
                    res.push_back(-1);
                else
                    res.push_back(s.top());
            }
            
            s.push(nums[i]);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        
        stack<int> s;
        vector<int> res;
        
        for(int i=2*nums.size()-1; i >=0; i--)
        {
            if(i == nums.size()-1)
                res.clear();
            if(s.empty())
                res.push_back(-1);
            else if(s.top() > nums[i%nums.size()])
                res.push_back(s.top());
            else
            {
                while(!s.empty() && s.top() <= nums[i%nums.size()])
                    s.pop();
                
                if(s.empty())
                    res.push_back(-1);
                else
                    res.push_back(s.top());
            }
            
            s.push(nums[i%nums.size()]);
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};