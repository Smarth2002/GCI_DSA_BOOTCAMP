//https://codeforces.com/problemset/problem/535/B

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int digits=log10(n)+1;
    int pos=0;

    int i=1;
    while (i < digits)
    {
        pos=pos+(1<<i);
        i++;
    }
    
    int x=1;
    while (n > 0)
    {
        if(n % 10 == 7)
        {
            pos+=x;
        }

        x=x<<1;
        n/=10;
    }

    cout<<pos+1;

    return 0;
}