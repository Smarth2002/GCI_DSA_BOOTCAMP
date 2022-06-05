//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/


#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int start, int end, int key)
{
    int mid, pos=-1;

    while (start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == key)
            return mid+1;
        else if(A[mid] < key)
            start=mid+1;
        else
        {
            pos=mid+1;
            end=mid-1;
        }
    }
    
    return pos;
}

int main()
{
    int t;
    cin>>t;

    int A[t];

    for (int i = 0; i < t; i++)
    {
        cin>>A[i];

        if(i > 0)
            A[i]+=A[i-1];
    }
    
    int q;
    cin>>q;

    int limit;

    while (q--)
    {
        cin>>limit;

        cout<<binarySearch(A, 0, t-1, limit)<<endl;
    }
    
    return 0;
}