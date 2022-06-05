//https://leetcode.com/problems/arranging-coins/

#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) 
{
    long int start=1, end=n;
    long int mid, ans;
    
    while(start <= end)
    {
        mid=start+(end-start)/2;
        
        if( (mid*(mid+1))/2 == n )
            return mid;
        else if( (mid*(mid+1))/2 > n )
            end=mid-1;
        else
        {
            ans=mid;
            start=mid+1;
        }
    }
    
    return ans;
}