//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int A[size];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
    }
    
    sort(A, A+size);

    int maxSum=0, SumSize=0;

    if(A[size-1] >= 0)
    {
        for (int i = size-1; i >= 0; i--)
        {
            if(A[i] < 0)
                break;
            
            maxSum+=A[i];
            SumSize++;
        }
    }
    else
    {
        maxSum=A[size-1];
        SumSize=1;
    }

    cout<<maxSum<<" "<<SumSize;

    return 0;
}