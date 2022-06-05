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

int min(int A[], int size) //to find min element before and after which both arrays are sorted and we can apply binary search
{
    int start=0, end=size-1;
    int mid;

    while(start <= end)
    {
        mid=start+(end-start)/2;

/*
//if at any point of time array become sorted 
like {11,12,15,18,2,5,6,8} after one iteration we get {2,5,6,8} 
so we cant rely on factor that min lie in unsorted part
*/
        if(A[start] <= A[end]) 
            return start;
        
        int next=(mid+1)%size;
        int prev=(mid+size-1)%size;

        if(A[mid] <= A[next] && A[mid] <= A[prev]) //min element is smaller than both its neighbours
            return mid;
        else if(A[start] <= A[mid]) //if 1st half sorted move in 2nd as min lie in unsorted half
            start=mid+1;
        else
            end=mid-1; //otherwise move in left half if right half is sorted
    }

    return -1;
}

int binarySearch(int A[], int size, int no, int start, int end)
{
    while(start <= end)
    {
        int mid=start+(end-start)/2;

        if(no == A[mid])
            return mid;
        else if(no > A[mid])
            start=mid+1;
        else
            end=mid-1;
    }

    return -1;
}

int find(int A[], int size, int no, int min) //now we got index of min element and both arrays before and after are sorted
{
    int pos;

    if(A[0] <= A[size-1]) //if array already sorted {1,2,3}
        pos=binarySearch(A, size, no, 0, size-1);
/*
//if array is unsorted then if element is greater then 1st element then it lie in left half before min
bcz in 2nd array last element will be smaller than 1st element (circulary sorted) so it cant exist in 2nd array 
*/
    else
    {
//we can also apply binary search on both arrays but we can check in which half element lie and apply B.S only in that half
        if(no >= A[0]) 
            pos=binarySearch(A, size, no, 0, min-1); //start=0, end=min-1 search in left half
        else
            pos=binarySearch(A, size, no, min, size-1); //search in right half as both halves are now sorted
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
    
    int no;
    cin>>no;

    int min_index=min(A, size);

    cout<<find(A, size, no, min_index);

    return 0;
}