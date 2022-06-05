//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N, A, B;
        cin>>N>>A>>B;

        int cost;

/*
if A>B then no of pots of kind 2 will be more otherwise no of pots of kins 1 will be more
to minimise the cost so we check for each value (i, N-i) to find min cost
*/

        if(A < B)
        {
            cost=B*N*N; //max cost will be when all pots of kind 2 will be taken 
        
            for (int i = N/2; i <= N; i++) //atleast half pots will be of kind 1 so start from N/2 and find cost for each pair
            {
                if(A*i*i+B*(N-i)*(N-i) < cost)
                    cost=A*i*i+B*(N-i)*(N-i); //keep storing it in cost
            }
        }
        else //if A > B then atleast half of pots will be of kind 2 
        {
            cost=A*N*N; // max cost when all pots of kind 1 taken

            for (int i = N/2; i <= N; i++)
            {
                if(A*(N-i)*(N-i)+B*(i)*(i) < cost)
                    cost=A*(N-i)*(N-i)+B*(i)*(i);
            }
        }

        cout<<cost<<endl; 
    }
    
    return 0;
}