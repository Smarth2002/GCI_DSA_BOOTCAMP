/*
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

int rotation_count(int A[], int size)
{
//rotation count = index of min element
/*
proceed as regular binary search and find min element
2 conditions
1. to check element with mid (if element is min then it will be smaller then both its neighbours)
2. deciding factor to move in either half 
(if an array is unsorted then min element will always lie in unsorted half i.e junction contains min element
and due to that junction array is unsorted) so we move towards unsorted subarray
*/

    int start=0, end=size-1;

    while(start <= end)
    {
/*//if in process we got sorted array then min element will be first one like {11,12,15,18,2,5,6,8}
after 1 iteration we got sorted array {2,5,6,8} and we cant perform the process in sorted array*/

        if(A[start] <= A[end]) 
            return start;
        
        int mid=start+(end-start)/2;
        int next=(mid+1)%size, prev=(mid+size-1)%size; //to avoid index out of bounds and get next index 0 if mid=size-1 and prev index=7 if mid=0

        if(A[mid] <= A[prev] && A[mid] <= A[next]) //check if mid is min then return mid
            return mid;
        else if(A[start] <= A[mid]) //if left half sorted then junction(min element) lie in right side (unsorted subarray)
            start=mid+1;
        else if(A[mid] <= A[end]) //if right half sorted then min lie in left unsorted subarray
            end=mid-1;
    }

    return -1; //if input is invalid i.e. array not rotated and sorted or contain duplicate values
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
    
    if(rotation_count(A, size) >= 0)
        cout<<rotation_count(A, size);
    else
        cout<<"invalid input";
    
    return 0;
}