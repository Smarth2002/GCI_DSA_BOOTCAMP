//https://www.hackerearth.com/problem/algorithm/shubham-and-xor-8526868e/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int n;
    cin>>n;

    long int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a, a+n);
    
    long int count=1; 
    long long int sum=0;

    for (int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
            count++;
        else
        {
            if(count > 2)
                sum=sum+(count*(count-1))/2;

            count=1;
        }
        
    }
    
    if(count >= 2)
        sum=sum+(count*(count-1))/2;

    cout<<sum;

    return 0;
}