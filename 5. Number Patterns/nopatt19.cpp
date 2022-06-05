#include<iostream>
using namespace std;

int main()
{
    int rows,columns;
    cin>>rows>>columns;

    for (int i = rows; i >= 1; i--)
    {
        for (int j = columns; j >= 1; j--)
        {
            if(j>=i)
                cout<<j;
            else
                cout<<i;
        }
            
        cout<<endl;
    }
    
    return 0;
}