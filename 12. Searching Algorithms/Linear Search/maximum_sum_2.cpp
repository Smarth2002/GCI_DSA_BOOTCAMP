//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/maximum-sum-4-f8d12458/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    int A[size];

    long int sum=0, count=0; 
    int max=A[0];

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];

        if(A[i] >= 0)
        {
            sum+=A[i];
            count++;
        }

        if(A[i] > max)
            max=A[i];
    }

    if(count)
        cout<<sum<<" "<<count;
    else
        cout<<max<<" "<<1;
    
    return 0;
}