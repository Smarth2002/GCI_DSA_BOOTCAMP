//https://www.geeksforgeeks.org/print-the-maximum-subarray-sum/

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
    int start=0, end=0, s=0;

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        
        if(sum > max_sum)
        {
            max_sum=sum;
            start=s;
            end=i;
        }

        if(sum < 0)
        {
            sum=0;
            s=i+1;
        }
    }
    
    cout<<max_sum<<" "<<start<<" "<<end;

    return 0;
}