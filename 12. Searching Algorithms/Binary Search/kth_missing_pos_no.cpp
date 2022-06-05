//https://leetcode.com/problems/kth-missing-positive-number/submissions/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) 
    {
        int count=0;
        int i=1;
        
        while(count != k)
        {
            int start=0, end=arr.size()-1;
            int mid;
                  
            while(start <= end)
            {
                mid=start+(end-start)/2;
                
                if(arr[mid] == i)
                    break;
                else if(i > arr[mid])
                    start=mid+1;
                else
                    end=mid-1;
            }
            
            if(start > end)
                count++;
            
            if(count == k)
                return i;
            
            cout<<i<<" "<<count<<endl;
            i++;
        }
        
        return i;
    }
};