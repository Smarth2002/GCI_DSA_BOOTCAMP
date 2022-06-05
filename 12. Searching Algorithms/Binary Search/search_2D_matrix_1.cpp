//https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) 
{
    int i=0, j=matrix[0].size()-1;
    
    while(i < matrix.size() && j >= 0)
    {                  
        if(target == matrix[i][j])
            return true;
        else if(target > matrix[i][j])
            i++;
        else
            j--;
    }
    
    return false;
}