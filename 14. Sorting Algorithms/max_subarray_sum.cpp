//https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int sum=0, max_sum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        
        if(sum > max_sum)
            max_sum=sum;

        if(sum < 0)
            sum=0;
    }
    
    cout<<max_sum;

    return 0;
}