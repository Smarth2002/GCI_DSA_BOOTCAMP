#include<bits/stdc++.h>
using namespace std;

int first_occurence(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid, occ=-1;

    while(start <= end)
    {
        int mid=start+(end-start)/2;

        if(no == A[mid])
        {
            occ=mid;
            end=mid-1;
        }
        else if(no > A[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    
    return occ+1;
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

    if(first_occurence(A, size, no))
        cout<<first_occurence(A, size, no);
    else
        cout<<"not found";

    return 0;
}