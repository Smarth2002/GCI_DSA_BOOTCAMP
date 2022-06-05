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

        for (int j = 1; j <= 2*n-1; j++)
        {
            if( j>=n+1-k && j<=2*(n-k)+1 )
                cout<<"*";
            else
                cout<<" "; 
        }

        cout<<endl;
        
    }

    return 0;
    
}