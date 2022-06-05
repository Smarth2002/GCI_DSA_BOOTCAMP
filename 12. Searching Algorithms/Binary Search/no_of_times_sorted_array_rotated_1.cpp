/*
Find the Rotation Count in Rotated Sorted array
Consider an array of distinct numbers sorted in increasing order. 
The array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

Examples:

Input : arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation : Initial array must be {2, 3,
6, 12, 15, 18}. We get the given array after 
rotating the initial array twice.

Input : arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15};
Output: 0
*/

#include<bits/stdc++.h>
using namespace std;

int no_of_times_rotated(int A[], int size)
{

/*
we have to find position of min element that will be the ans
so we take first element and start searching for min element by comparing with that first element
if middle val < element then store its pos as it may be min element and further search in right subarray for another smaller value
otherwise if value is greater or equal to element then search in right subarray as min will be present in right
so we have to find value < element in extreme left so we keep moving towards left even on finding a smaller value
*/
    int element=A[0];
    int start=0, end=size-1;
    int mid, pos;

/*//if array will be already sorted then there will be greater values only 
and we will keep moving right in search for smaller value and exhaust the search space*/

    if(A[0] < A[size-1])
        pos=0;
    else
    {
        while(start <= end)
        {
            mid=start+(end-start)/2;

            if(element > A[mid])
            {
                end=mid-1;
                pos=mid;
            }
            else
                start=mid+1;
        }
    }

    return pos;
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
    
    cout<<no_of_times_rotated(A, size);
    

    return 0;
}