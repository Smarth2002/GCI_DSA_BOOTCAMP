#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)   //same as concentric sq 1 program...only conditions are combined(same conditions)
    {
        for (int j = 1; j <= rows; j++) //any of below condition satisfied then print star (just checking all conditions at once)
        {
            if( (i==1 || j==1 || i==rows || j==rows) || (( i>=3 && i<=rows-2 && j>=3 && j<=rows-2 ) && ( i==3 || j==3 || i==rows-2 || j==rows-2 )) )
                cout<<"*";
            else
                cout<<" ";
        
        }
        
        cout<<endl;
        
    }

    return 0;
    
}