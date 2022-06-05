/*
Given a sorted array, find the element in the array which has minimum difference with the given number.
*/

#include<bits/stdc++.h>
using namespace std;

int minDiff_element(int A[], int size, int key)
{
    int start=0, end=size-1;
    int mid;
    
/*
so we have to find nearest element bcz that will give min diff...and diff will increase as we move away from 
key in either left or right direction
if key is present then its the ans
so candidates are 2 neighbours of key if key is not present
*/

    while (start <= end) 
    {
        mid=start+(end-start)/2;

        if(A[mid] == key)
            return A[mid];
        else if(A[mid] < key)
            start=mid+1;
        else
            end=mid-1;
    }

//now if key not found and returned till now then start points to right neighbour and end to left neighbour of key (crossed each other) 
    
    if(abs(key - A[start]) < abs(key - A[end]))
        return A[start];
    else
        return A[end];
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