//https://www.hackerearth.com/problem/algorithm/the-castle-gate-july-easy/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int total_pairs=(n*(n-1))/2;
       
        for (int i = 1; i < n; i++)
        {
            for (int j = i+1; j <= n; j++)
            {
                if((i ^ j) > n)
                    total_pairs--;
            }
        }
        
        cout<<total_pairs<<endl;
    }

return 0;

}