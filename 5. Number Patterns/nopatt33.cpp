#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int k=0,no;

    for (int i = 1; i <= 2*n+1; i++)
    {
        (i<=n+1)?k++:k--;
        no=1;

        for (int j = 1; j <= 2*k-1; j++)
        {
            if(j==1 || j==2*k-1)
                cout<<"*";
            else
            {
                cout<<no;

                (j<k)?no++:no--;
            }

        }

        cout<<endl;
   
    }
    return 0;
}