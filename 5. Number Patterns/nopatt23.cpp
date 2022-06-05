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
            if(j<=k)
                cout<<n-j+1;

            else if(j>=2*n-k)
                cout<<j-n+1;
            
            else
                cout<<n-k+1;
        }

        cout<<endl;
        
    }

    return 0;
    
}