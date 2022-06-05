#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(j<=i)
            {
                if(i%2==0)
                    cout<<2*j;
                else
                    cout<<2*j-1;
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}