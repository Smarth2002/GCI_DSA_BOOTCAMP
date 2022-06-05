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

    int sum=0, max_sum=INT_MIN, end;

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];

        if(sum > max_sum)
        {
            max_sum=sum;
            end=i;
        }
        
        if(sum < 0)
            sum=0;
    }
    
    int i=end;

    while (max_sum != 0)
    {
        max_sum-=a[i];
        i--;
    }
    
    cout<<i+1<<" "<<end;

    return 0;
    
}