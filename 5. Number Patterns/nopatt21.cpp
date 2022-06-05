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
            if(j<=columns-i+1)            
                cout<<i+j-1;
            else
                cout<<columns-j+1;
        }

        cout<<endl;
        
    }

    return 0;
    
}