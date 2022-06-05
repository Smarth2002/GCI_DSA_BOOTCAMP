#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {        
        char ch='A';

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if( j <= rows+1-i || j >=rows-1+i )
                cout<<ch;
            else
                cout<<" ";

            ch++;     //value increases whether character printed or not
        }

        cout<<endl;
        
    }

    return 0;
    
}