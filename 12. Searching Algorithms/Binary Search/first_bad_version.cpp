// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
//https://leetcode.com/problems/first-bad-version

#include<bits/stdc++.h>
using namespace std;

int firstBadVersion(int n) 
    {              
        int start=1, end=n;
        int mid, ans;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(isBadVersion(mid))
            {
                ans=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        
        return ans;
    }