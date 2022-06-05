#include<bits/stdc++.h>
using namespace std;

int first_1(int A[])
{
    int start=0, end=1;

    while (A[end] < 1)
    {
        start=end;
        end*=2;
    }
    
    int mid, ans;

    while(start <= end)
    {
        mid=start+(end-start)/2;

        if(A[mid] == 1)
        {
            ans=mid;
            end=mid-1;
        }
        else
            start=mid+1;
    }

    return ans;
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
    
    cout<<first_1(A);

    return 0;
}