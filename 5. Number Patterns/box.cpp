#include<iostream>
using namespace std;

int main()
{
    int rows,columns;
    cin>>rows>>columns;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if( i == (rows+1)/2 && j == (columns+1)/2 )
                cout<<"0";
            else
                cout<<"1";
        }
        
        cout<<endl;
        
    }

    return 0;
    
}