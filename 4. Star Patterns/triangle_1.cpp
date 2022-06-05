#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n+i-1; j++)   //can also be 2n-1 to complete rectangle with spaces
        {
            if(j<=n-i)
                cout<<" ";
            else
                cout<<"*"; //it will only work for j<=n+i-1 bcz cursor will not go ahead but if we used j<=2n-1 then cursor will print * in complete remaining rectangle
        }

        cout<<endl;
        
    }
    return 0;
    
}