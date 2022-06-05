#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        char ch='A';

        for (int j = 1; j <= 2*n-1; j++)
        {
            if (j<=n-i+1 || j>=n+i-1)
            {
                cout<<ch;

                if(j<n-i+1)
                    ch++;
                else if(j>=n+i-1)
                    ch--;    
            }
            else
            {
                cout<<" ";
            }
        }

        cout<<endl;
        
    }
    return 0;
}