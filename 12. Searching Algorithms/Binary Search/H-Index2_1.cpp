//https://leetcode.com/problems/h-index-ii

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
        int start=0, end=citations.size()-1;
        int mid, ans=0;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(citations[mid] == citations.size()-mid)
                return citations.size()-mid;
            
            else if(citations[mid] > citations.size()-mid)
            {
                ans=citations.size()-mid;
                end=mid-1;
            }
            
            else
                start=mid+1;
        }
        
        return ans;
    }
};