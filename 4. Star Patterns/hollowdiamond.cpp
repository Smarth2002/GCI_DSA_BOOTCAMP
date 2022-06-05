#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int n=(rows+1)/2;
    int k=0;

    for (int i = 1; i <= rows; i++)
    {
        (i<=n)?k++:k--;           //upto n i.e middle row k(reqd val of i) increase then decrease

        for (int j = 1; j <= rows; j++)
        {
            if(j<=n+1-k || j>=n-1+k)
                cout<<"*";
            else
                cout<<" ";
        }
        
        cout<<endl;
        
    }

    return 0;
    
}