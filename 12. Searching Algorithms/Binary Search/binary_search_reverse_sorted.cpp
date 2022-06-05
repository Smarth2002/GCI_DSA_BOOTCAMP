#include<bits/stdc++.h>
using namespace std;

int binarySearch_rev(int A[], int size, int no)
{
    int start=0, end=size-1;
    int mid;

    while(start <= end)
    {
        mid=start+(end-start)/2;

        if(no == A[mid])
            return mid+1;
        else if(no < A[mid])
            start=mid+1;
        else
            end=mid-1;
    }

    return 0;
}

int main()
{
    int A[]={20, 17, 15, 14, 13, 12, 10, 9, 8, 4};
    int size=(sizeof(A)/sizeof(A[0]));

    int no;
    cin>>no;

    if(binarySearch_rev(A, size, no))
        cout<<binarySearch_rev(A, size, no);
    else
        cout<<"not found";
    
    return 0;
}