//https://leetcode.com/problems/fair-candy-swap/

#include<bits/stdc++.h>
using namespace std;

vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) 
{
    vector<int> ans;
    
    long int sumA=0, sumB=0;
    
    for(int i = 0; i < aliceSizes.size(); i++)
        sumA+=aliceSizes[i];
    for(int i = 0; i < bobSizes.size(); i++)
        sumB+=bobSizes[i];
    
    int midPt=sumA+(sumB-sumA)/2;
    int gainA=midPt-sumA;
    
    sort(bobSizes.begin(), bobSizes.end());
    
    for(int i = 0; i < aliceSizes.size(); i++)
    {
        int start=0, end=bobSizes.size()-1;
        int mid;
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(bobSizes[mid] - aliceSizes[i] == gainA)
            {
                ans.push_back(aliceSizes[i]);
                ans.push_back(bobSizes[mid]);
                return ans;
            }
            else if(bobSizes[mid] - aliceSizes[i] < gainA)
                start=mid+1;
            else 
                end=mid-1;
        }
    }
    
    return ans;
}