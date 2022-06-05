//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

#include<bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int>>& grid) 
{
    int count=0;
    
    int i=0, j=grid[0].size()-1;
    
    while(i < grid.size() && j >= 0)
    {                 
        if(grid[i][j] < 0)
        {
            count=count+grid.size()-i;
            j--;
        }
        else
            i++;
    }
    
    return count;
}