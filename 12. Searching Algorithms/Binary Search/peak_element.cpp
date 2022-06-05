/*
//https://leetcode.com/problems/find-peak-element

FIND PEAK ELEMENT IN AN ARRAY:

A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that nums[-1] = nums[n] = -∞.

Example :

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
*/

#include<bits/stdc++.h>
using namespace std;

int peak_element(int A[], int size)
{
    int start=0, end=size-1;
    int mid;

/*
we find mid and check if its peak
 if its greater than both its neighbours its peak and return it
 otherwise if its not peak its less than either of its neighbours

if mid < left neighbour & mid > right neighbour 
then we are not sure if peak is there in left side but its for sure that atleast 1 element peak will be on right
bcz either (mid+1 i.e. right neighbour) will be peak if not then its right element and if not then its right element
so either element in between right side will be peak or at right corner

so we move right (to the side whose neighbour > mid)
*/

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(mid > 0 && mid < size-1) //to check mid-1 & mid+1 so that they are in bounds
        {
            if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
                return mid;
            else if(A[mid-1] > A[mid])
                end=mid-1;
            else
                start=mid+1;
        }
        else if (mid == 0) //mid=0 only if there is starting 1 or 2 elements left 
        {
            if(A[0] > A[1]) //check only with right neighbour
                return 0;
            else
                return 1;
        }
        else if (mid == size-1) //mid=size-1 if only 1 last element will be left
        {
            return size-1;
        }
        
    }
    
    return 0;
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
    
    cout<<peak_element(A, size);

    return 0;
}