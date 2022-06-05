#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(j<=i)
                cout<<i-j+1;
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}