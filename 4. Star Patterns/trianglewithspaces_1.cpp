#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)  //can also be j<=n+i-1
        {
            if( j>=n-i+1 && j<=n+i-1)
                if((i+j)%2==0)      //bcz we need spaces even within the reqd range so further condition
                    cout<<"*";
                else
                    cout<<" ";
            
            else
                cout<<" ";

        }
        cout<<endl;
        
    }
    return 0;
    
}