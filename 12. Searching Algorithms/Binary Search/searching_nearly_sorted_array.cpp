/*
SEARCH IN A NEARLY SORTED ARRAY:

Given an array which is sorted, but after sorting some elements are moved to either of the adjacent positions,
i.e., arr[i] may be present at arr[i+1] or arr[i-1]. Write an efficient function to search an element in this array.
Basically the element arr[i] can only be swapped with either arr[i+1] or arr[i-1].

For example consider the array {2, 3, 10, 4, 40}, 4 is moved to next position and 10 is moved to previous position.

Example :
Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2 
Output is index of 40 in given array
*/

#include<bits/stdc++.h>
using namespace std;

int nearlySorted(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid;

    while(start <= end)
    {
        mid=start+(end-start)/2;

/*in general binary search ith element is at ith index only so compare the element at ith index only 
but here it may be at i-1, i or i+1 so compare with all these
and these i+1 and i-1 th indices should not be out of bounds 
also these should not be indices of elements already checked
so i-1 >= start and i+1 <=end */

        if(no == A[mid]) //comparing with element at ith index
            return mid;

        else if(mid-1 >= start && A[mid-1] == no) //comparing with element at i-1 th index 
            return mid-1;

        else if(mid+1 <= end && A[mid+1] == no) //comparing with element at i+1 th index 
            return mid+1;
/*
if no > A[mid] then move right bcz elements after mid+2 will be greater than mid
bcz there may be small element at mid+1 index only as elements can be swapped till one index only
similarly for no < A[mid]
*/
 
        else if(no > A[mid]) //bcz mid+1 is already checked above and is not equal to no
            start=mid+2;
        
        else //mid-1 already checked
            end=mid-2;
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

    cout<<nearlySorted(A, size, no);

    return 0;
}