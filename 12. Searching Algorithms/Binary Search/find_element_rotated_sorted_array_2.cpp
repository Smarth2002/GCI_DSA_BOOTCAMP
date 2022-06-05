/*
FIND AN ELEMENT IN A ROTATED SORTED ARRAY:

Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
*/

#include<bits/stdc++.h>
using namespace std;

int find(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid;

    while(start <= end)
    {
        mid=start+(end-start)/2; //now at any point of splitting one half will be sorted other will be unsorted (circularly sorted array)

        if(no == A[mid])
            return mid;

        else if(A[0] <= A[mid]) //if left half sorted 
        {
            if(no >= A[0] && no <= A[mid]) //check if element is in left half as its sorted and move left
                end=mid-1;
            else
                start=mid+1; //move right
        }
        
        else //right half sorted
        {
            if(no >= A[mid] && no <= A[size-1])
                start=mid+1; //if element lie in right half move right
            else
                end=mid-1; //otherwise move left
        } 
    }
    
    return -1;
}

int main()
{
    int size;
    cin>>size;

    int A[size];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }
    
    int no;
    cin>>no;

    cout<<find(A, size, no);

    return 0;
}