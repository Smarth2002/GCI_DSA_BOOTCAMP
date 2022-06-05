/*
FIND AN ELEMENT IN BITONIC ARRAY:

Given a bitonic sequence of n distinct elements, write a program to find a given element x 
in the bitonic sequence in O(log n) time. A Bitonic Sequence is a sequence of numbers which is 
first strictly increasing then after a point strictly decreasing.

Examples:

Input :  arr[] = {-3, 9, 8, 20, 17, 5, 1};
         key = 20
Output : Found at index 3
*/

#include<bits/stdc++.h>
using namespace std;

/*
we cant tell where the element lie by simply looking at its neighbours so we dont know to move left or right
but we can see that the peak (max) element divide it into 2 arrays (ascending and descending) so we can
apply binary search oon both arrays and find our key
*/

int binarySearch(int A[], int start, int end, int key)
{
    int mid, flag;

    (A[start] < A[end]) ? flag=1 : flag=0; //check order of array 1st as it can be any ascending or descending

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == key)
            return mid;
        else if(A[mid] < key)
        {
            if(flag)
                start=mid+1;
            else
                end=mid-1;
        }
        else
        {
            if(flag)
                end=mid-1;
            else
                start=mid+1;                                       
        }        
    }
    
    return -1;
}

int search_bitonicArray(int A[], int size, int key)
{
    int start=0, end=size-1;
    int mid, peak;

    while (start <= end) //finding peak element (max) index
    {
        mid=start+(end-start)/2;

        if(A[mid] > A[mid-1] && A[mid] > A[mid+1])
        {
            peak=mid;
            break;
        }
        else if(A[mid-1] > A[mid])
            end=mid-1;
        else
            start=mid+1;
    }
    
    int index1=binarySearch(A, 0, peak-1, key); //search key in 1st array
    int index2=binarySearch(A, peak+1, size-1, key); //search in 2nd array

    if(index1 == -1 && index2 == -1)
        return -1;
    else if(index1 >= 0)
        return index1;
    else
        return index2;
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
    
    int key;
    cin>>key;

    if(search_bitonicArray(A, size, key) == -1)
        cout<<"not found";
    else
        cout<<search_bitonicArray(A, size, key);
    
    return 0;
}