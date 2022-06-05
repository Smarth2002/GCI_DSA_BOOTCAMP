//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) 
{
    int count=0;
    
    for(int i = 0; i < grid.size(); i++)
    {
        int start=0, end=grid[0].size()-1;
        int mid, negPos=grid[0].size();
        
        while(start <= end)
        {
            mid=start+(end-start)/2;
            
            if(grid[i][mid] < 0)
            {
                negPos=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        
        count=count+(grid[0].size()-negPos);
    }
    
    return count;
}