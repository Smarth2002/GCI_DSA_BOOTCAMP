#include<bits/stdc++.h>
using namespace std;

int binarySearch(int A[], int size, int no)
{
    int start=0, end=size-1, mid;

    while(start <= end)
    {
        mid=(start+end)/2;

        if(no == A[mid])
            return mid+1;
        else if(no > A[mid])
            start=mid+1;
        else
            end=mid-1;
    }

    return -1;
}

int main()
{
    int A[5]={2, 3, 4, 11, 13};

    int no;
    cin>>no;

    if(binarySearch(A, 5, no))
        cout<<binarySearch(A, 5, no)<<endl;
    else
        cout<<"not found"<<endl;
    
    return 0;
}