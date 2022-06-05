#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)      //for 1st half
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if(j>=n-i+1 && j<=n+i-1)
                cout<<"*";
            else
                cout<<" ";       
        }

        cout<<endl;;
        
    }

    for (int i = n ; i > 1; i--)    // for 2nd half with n-1 rows
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if(j>=n-i+2 && j<=n+i-2)
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
        
    }
    

    return 0;
    
}