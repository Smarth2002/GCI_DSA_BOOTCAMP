#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int val=1;

        for (int j = 1; j <= 2*n-1; j++)
        {
            if (j>=n-i+1 && j<=n+i-1)
            {
                cout<<val;

                (j<n)?val++:val--;  //till middle element val increase and then decreases
                
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