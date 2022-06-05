//https://leetcode.com/problems/intersection-of-two-arrays/

#include<bits/stdc++.h>
using namespace std;


vector<int> intersection(vector<int>& nums1, vector<int>& nums2) 
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        for(int i = 1; i < nums1.size(); i++)
        {
            if(nums1[i] == nums1[i-1])
            {
                nums1.erase(nums1.begin()+i);
                i--;
            }
        }
        
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++)
        {
            int start=0, end=nums2.size()-1;
            int mid;
            
            while(start <= end)
            {
                mid=start+(end-start)/2;
                
                if(nums2[mid] == nums1[i])
                {
                    ans.push_back(nums2[mid]);
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
