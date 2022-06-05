//https://www.hackerearth.com/problem/algorithm/monk-and-his-friend/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long int p, m;
        cin>>p>>m;

        long int res=p^m, count=0;

        while (res > 0)
        {
            count++;
            res=res&(res-1);
        }

        cout<<count<<endl;   
    }
    
    return 0;
}