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
            if(i+j==rows+1)
                cout<<"/";
            else if(i==j)
                cout<<"\\";         //to print single backslash (\)
            else
                cout<<"*";            
        }
        cout<<endl;
        
    }
    return 0;
    
}