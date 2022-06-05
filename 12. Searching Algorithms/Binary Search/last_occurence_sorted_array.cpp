#include<bits/stdc++.h>
using namespace std;

int last_occurence(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid, occur=-1;

    while(start <= end)
    {
        int mid=start+(end-start)/2;

        if(no == A[mid])
        {
            occur=mid;
            start=mid+1;
        }
        else if(no > A[mid])
            start=mid+1;
        
        else
            end=mid-1;
    }

    return occur+1;
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
    
    if(last_occurence(A, size, no))
        cout<<last_occurence(A, size, no);
    else
        cout<<"not found";

    return 0;
}