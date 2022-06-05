//https://leetcode.com/problems/h-index-ii

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) 
    {
      
        for(int i = citations.size(); i >= 1; i--)
        {
            int  start=0, end=citations.size()-1;
            int mid, pos=-1;
            
            while(start <= end)
            {
                mid=start+(end-start)/2;
                
                if(citations[mid] == i)
                {
                    pos=mid;
                    end=mid-1;
                }
                else if(i < citations[mid])
                {
                    pos=mid;
                    end=mid-1;
                }
                else
                    start=mid+1;
                                 
            }
            
            if(pos != -1 && citations.size()-pos >= i)
                return i;
        }
        
        return 0;
    }
};