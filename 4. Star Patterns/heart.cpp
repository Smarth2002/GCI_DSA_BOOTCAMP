#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = n/2; i <= n; i+=2)     //block 1 from n/2 stars to n stars
    {
        for(int j = 1; j< n-i; j+=2)  //spaces
            cout<<" ";
        
        for (int j = 1; j <= i; j++)  //no of stars = no of rows 
            cout<<"*";
        
        for(int j = 1; j <= n-i; j++)  //spaces
            cout<<" ";
        
        for(int j = 1; j <= i; j++)    //no of stars = no of rows
            cout<<"*";

        cout<<endl;
        
    }


    for (int i = 1; i <= n; i++)         //block 2
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if( j>=i && j<=2*n-i )
                cout<<"*";
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
    
}