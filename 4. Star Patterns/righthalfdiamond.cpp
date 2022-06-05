#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;
    int k=0,n=(rows+1)/2;

    for (int i = 1; i <= rows; i++)
    {
        if(rows%2==0)
        {
            if(i<=n)
                k++;
            else if(i>n+1)
                k--;
        }
        else
        {
            (i<=n)?k++:k--;
        }
        

        for (int j = 1; j <= n; j++)
        {
            if(j<=k)
                cout<<"*";
            else
                cout<<" ";
            
        }

        cout<<endl;
        
    }

    return 0;
    
}