//https://www.hackerearth.com/problem/algorithm/criminals-little-deepu-and-little-kuldeep/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        long int pack[n];

        for (int i = 0; i < n; i++)
        {
            cin>>pack[i];
        }

        sort(pack, pack+n);

        int res=n;
        int occ[n]={};

        int i, j;
        for ( i = 0; i < n-1; i++)
        {
            for ( j = i+1; j < n; j++)
            {
                if(pack[i] < pack[j] && occ[j] == 0)
                {
                    res--;
                    occ[j]=1;

                    break;
                }
            }
            
            if(j == n)
                break;
        }
        
        cout<<res<<endl;
    }

    return 0;
    
}