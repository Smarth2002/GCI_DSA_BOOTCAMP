//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/square-transaction-20/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    int A[t];

    for (int i = 0; i < t; i++)
    {
        cin>>A[i];
    }
    
    int q;
    cin>>q;

    int B[q];

    long int sum;
    int i, j;
    
    for ( i = 0; i < q; i++)
    {
        cin>>B[i];
        sum=0;

        for ( j = 0; j < t; j++)
        {
            sum+=A[j];

            if(sum >= B[i])
            {
                cout<<j+1<<endl;
                break;
            }
        }

        if(j == t)
            cout<<-1<<endl;
    }
    
    return 0;
}