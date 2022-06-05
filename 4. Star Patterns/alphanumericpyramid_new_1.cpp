#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        char ch='1';

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j >= rows+1-i && j <= rows-1+i)
            {
                if(j==rows+1)       //char changes to A after the middle row while keep increasing
                    ch='A';

                cout<<ch;
                ch++;
            }
            else
                cout<<" ";
            
        }

        cout<<endl;
        
    }

    return 0;
    
}