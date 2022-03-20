//https://leetcode.com/problems/next-greater-element-i/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    #define MAX 10005
    int ngr[MAX];
    
    void NGR(vector<int> nums2)
    {
        stack<int> s;
        
        for(int i=nums2.size()-1; i>=0; i--)
        {
            if(s.empty())
                ngr[nums2[i]]=-1;
            else if(!s.empty() && s.top() > nums2[i])
                ngr[nums2[i]]=s.top();
            else if( !s.empty() && s.top() < nums2[i])
            {
                while(!s.empty() && s.top() < nums2[i])
                    s.pop();
                
                if(s.empty())
                    ngr[nums2[i]]=-1;
                else
                    ngr[nums2[i]]=s.top();
            }
            
            s.push(nums2[i]);
        }
        
        return;
    }
    
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        
        NGR(nums2);
        
        for(int i=0; i<nums1.size(); i++)
        {
            res.push_back(ngr[nums1[i]]);
        }
        
        return res;
    }
};