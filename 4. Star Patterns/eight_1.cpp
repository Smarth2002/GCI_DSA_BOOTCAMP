#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k=0;

    for (int i = 1; i <= 2*n-1; i++)
    {
        (i<=n)?k++:k--;

        for (int j = 1; j <= n; j++)
        {
            if( (k==1 || k==n) && (j>1 && j<n) )  //if row=1,n than j should be btw 1 to n and similarly for other loop
                cout<<"*";
            else if( (j==1 || j==n) && (k>1 && k<n) )
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}