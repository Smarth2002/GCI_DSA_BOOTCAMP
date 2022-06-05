//https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ff08/0000000000387171

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
    
    int max=-1, ans=0;

    for (int i = 0; i < n; i++)
    {
        if(i == 0 && a[i] > a[i+1])   
            ans++;
        else if(i == n-1 && a[i] > max)
            ans++;
        else
        {
            if(a[i] > max && a[i] > a[i+1])
                ans++;
        }
        
        if(a[i] > max)
            max=a[i];
    }
    
    cout<<ans;

    return 0;
}