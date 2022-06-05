//https://leetcode.com/problems/sqrtx

#include<bits/stdc++.h>
using namespace std;

int mySqrt(int x) 
    {             
        int start=0, end=x;
        long int mid, ans;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(mid*mid == x)
                return mid;
            else if(mid*mid > x)
                end=mid-1;
            else
            {
                ans=mid;
                start=mid+1;
            }
        }
        
        return ans;
    }
