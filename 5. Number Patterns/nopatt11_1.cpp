#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= 2*rows-1; j++)
        {
            if( j <= 2*(rows-i)+1 )
                cout<<j;
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}