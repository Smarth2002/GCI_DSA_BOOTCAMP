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
                if( (i+j) % 2 == 0 )
                    cout<<"1";
                else
                    cout<<"0";
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}