/*
FIND MAXIMUM ELEMENT IN AN BITONIC ARRAY:

Problem statement:
Given a bitonic array find the maximum value of the array. 
An array is said to be bitonic if it has an increasing sequence of integers followed immediately 
by a decreasing sequence of integers.

Example:

Input:
1 4 8 3 2

Output:
8
*/

#include<bits/stdc++.h>
using namespace std;

int max_bitonicArray(int A[], int size)
{
/*
every max element is a peak element (greater than both its neighbours) and bitonic array contains only 1 peak element
so we can write the code for peak element

if (mid > mid-1 && mid > mid+1) then its max as well as peak element so return it
else if (mid-1 > mid) so peak(max) element lies on left side as right side will keep on decreasing
else if (mid+1 > mid) so it lies on right bcz elements on left side will keep decreasing
*/

    int start=0, end=size-1;
    int mid;

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
            return A[mid];
        else if(A[mid-1] > A[mid])
            end=mid-1;
        else
            start=mid+1;
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
    
    cout<<max_bitonicArray(A, size);

    return 0;
}