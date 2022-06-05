//https://leetcode.com/problems/intersection-of-two-arrays-ii

#include<bits/stdc++.h>
using namespace std;

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        //frequency method

        vector<int> freq1(1000);
        
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++)
        {
            freq1[nums1[i]]++;
        }
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(freq1[nums2[i]] > 0)
            {
                ans.push_back(nums2[i]);
                freq1[nums2[i]]--;
            }
        }
        
        return ans;
    }
