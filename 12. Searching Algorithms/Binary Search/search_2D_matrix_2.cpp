//https://leetcode.com/problems/search-a-2d-matrix/

#include<bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) //treat whole matrix as sorted array and apply binary search on whole array
{
    int row=matrix.size(), col=matrix[0].size();
    
    int start=0, end=row*col-1; //start=index of 1st element of matrix, end=index of last element of matrix
    int mid, mid_val;
    
    while(start <= end)
    {
        mid=start+(end-start)/2; //middle index
        
        mid_val=matrix[mid/col][mid%col]; //mid/col gives row of middle value and mid%col= col of middle val similarly mid%row=row and mid/row=col of element at mid index
        
        if(target == mid_val)
            return true;
        else if(target < mid_val)
            end=mid-1;
        else
            start=mid+1;
    }
    
    return false;
}