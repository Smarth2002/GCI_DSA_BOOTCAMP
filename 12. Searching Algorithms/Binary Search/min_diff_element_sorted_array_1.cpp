/*
Given a sorted array, find the element in the array which has minimum difference with the given number.
*/

#include<bits/stdc++.h>
using namespace std;

int minDiff_element(int A[], int size, int key)
{
    int start=0, end=size-1;
    int small_close, large_close;

/*
so we have to find nearest element bcz that will give min diff...and diff will increase as we move away from 
key in either left or right direction
if key is present then its the ans
so candidates are 2 neighbours of key if key is not present
so left neighbour=greatest element smaller than key
right neighbour=smallest element greater than key
*/

    int mid;

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == key)
        {
            small_close=key;
            break;
        }
        else if(A[mid] < key)
        {
            small_close=A[mid];
            start=mid+1;
        }
        else
            end=mid-1;
    }

    if(small_close != key)
    {
        start=0, end=size-1;

        while (start <= end)
        {
            mid=start+(end-start)/2;

            if(A[mid] < key)
                start=mid+1;
            else
            {
                large_close=A[mid];
                end=mid-1;
            }
        }
    }

    return (abs(key-small_close) < abs(key-large_close)) ? small_close : large_close;
    
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

    cout<<minDiff_element(A, size, key);

    return 0;
}