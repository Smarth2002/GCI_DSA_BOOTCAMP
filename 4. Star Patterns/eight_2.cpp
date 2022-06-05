#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if( (i==1 || i==n || i==2*n-1) && (j==1 || j==n) ) //to print spaces at corners 
                cout<<" ";
            else if( i==1 || i==n || i==2*n-1 || j==1 || j==n ) //for hollow pattern ...will also cover elements other than corner spaces 
                cout<<"*";
            else
                cout<<" ";

        }

        cout<<endl;
        
    }
    
    return 0;
}