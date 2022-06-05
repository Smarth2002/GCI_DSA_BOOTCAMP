/*
CEILING OF AN ELEMENT IN A SORTED ARRAY:

Given a sorted array and a value x, the ceiling of x is the smallest element in array greater than or equal to x,
and the floor is the greatest element smaller than or equal to x. 
Assume than the array is sorted in non-decreasing order. Write efficient functions to find floor and ceiling of x.

Examples :

For example, let the input array be {1, 2, 8, 10, 10, 12, 19}
For x = 0:    floor doesn't exist in array,  ceil  = 1
For x = 1:    floor  = 1,  ceil  = 1
For x = 5:    floor  = 2,  ceil  = 8
For x = 20:   floor  = 19,  ceil doesn't exist in array

*/

#include<bits/stdc++.h>
using namespace std;

int ceil(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid, ceil;

    while(start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == no)
            return A[mid];
        else if (A[mid] > no)
        {
            ceil=A[mid];
            end=mid-1;
        }
        else
            start=mid+1;
    }
    
    return ceil;
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

    cout<<ceil(A, size, no);

    return 0;
}