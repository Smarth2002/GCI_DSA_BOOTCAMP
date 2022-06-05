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

               (j<n)?ch++:ch--; //bcz it only works for specific values of j irrespective of this condition bcz only values in given range enter
            }
            else
            {
                cout<<" ";

                if(j==4)     //to decrement only once as there is extra incrementation on j=n-i+1
                    ch--;
            }
        }

        cout<<endl;
        
    }
    return 0;
}