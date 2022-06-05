#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        int k=1; 

/*toggling tha values of k to 0 if star printed and 0 if space is printed so the other time
  opposite happens*/

        for (int j = 1; j <= 2*n-1; j++)
            if (j>=n-i+1 && j<=n+i-1 && k)
            {
                cout<<"*";
                k=0;
            }
            else
            {
                cout<<" ";
                k=1;
            }
        
        cout<<endl;
    }
            
    return 0;
}