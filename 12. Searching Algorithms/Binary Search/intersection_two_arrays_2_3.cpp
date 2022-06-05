//https://leetcode.com/problems/intersection-of-two-arrays-ii

#include<bits/stdc++.h>
using namespace std;


vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        //binary search method

        vector<int> ans;
        
        sort(nums2.begin(), nums2.end());
        
        for(int i = 0; i < nums1.size(); i++)
        {
            int start=0, end=nums2.size()-1;
            int mid;
            
            while(start <= end)
            {
                mid=start+(end-start)/2;
                
                if(nums1[i] == nums2[mid])
                {
                    ans.push_back(nums1[i]);
                    nums2.erase(nums2.begin()+mid);
                    break;
                }
                else if(nums1[i] > nums2[mid])
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        
        return ans;
    }
