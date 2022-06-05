#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows+1-i; j++)
        {
            cout<<rows+1-i-j;
        }
        
        cout<<endl;
    }

    return 0;
    
}