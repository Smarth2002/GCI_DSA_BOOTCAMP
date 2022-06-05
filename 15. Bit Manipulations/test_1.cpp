#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int digits=log10(n)+1;

    int rank=0;

    for (int i = 1; i <= digits-1; i++)
    {
        rank+=(1<<i);
    }
    
    int pos=0;

    while (n > 0)
    {
        if(n % 10 == 7)
            rank+=(1<<pos);
        pos++;
        n/=10;
    }
    
    cout<<rank+1<<endl;

    return 0;
}