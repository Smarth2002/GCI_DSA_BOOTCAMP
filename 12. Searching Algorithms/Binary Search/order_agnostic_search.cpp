#include<bits/stdc++.h>
using namespace std;

int binarySearch_Agnostic(int A[], int size, int no)
{
    int start=0, end=size-1;

    if(size == 1)
    {
        if(no == A[0])
            return 1;
    }
    else
    {
        int flag = (A[0] < A[1]) ? 1 : 0;
        int mid;

        while(start <= end)
        {
            mid=(start+end)/2;

            if(no == A[mid])
                return mid+1;

            else if(no > A[mid])
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
    }

    return 0;
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

    if(binarySearch_Agnostic(A, size, no))
        cout<<binarySearch_Agnostic(A, size, no);
    else
        cout<<"not found";

    return 0;
}