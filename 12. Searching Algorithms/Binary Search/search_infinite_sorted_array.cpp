/*
Suppose you have a sorted array of infinite numbers, how would you search an element in the array?
*/

#include<bits/stdc++.h>
using namespace std;

int find_infArr(int A[], int no)
{
    int start=0, end=1;

    while (no > A[end])
    {
        start=end;
        end*=2;
    }
    
    int mid;

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(no == A[mid])
            return mid;
        else if(no > A[mid])
            start=mid+1;
        else
            end=mid-1;
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

    cout<<find_infArr(A, no);

    return 0;
}