/*
FIND FLOOR OF AN ELEMENT IN A SORTED ARRAY:

Given a sorted array and a value x, the floor of x is the largest element in array smaller than or equal to x.
Write efficient functions to find floor of x.

Example:

Input : arr[] = {1, 2, 8, 10, 10, 12, 19}, x = 5
Output : 2
2 is the largest element in arr[] smaller than 5.
*/

#include<bits/stdc++.h>
using namespace std;

int floor(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid, floor;

    while(start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == no)
            return A[mid];
        
        else if(no < A[mid])
            end=mid-1;

        else
        {
            floor=A[mid];
            start=mid+1;
        }
    }
    
    return floor;
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

    cout<<floor(A, size, no);

    return 0;
    
}