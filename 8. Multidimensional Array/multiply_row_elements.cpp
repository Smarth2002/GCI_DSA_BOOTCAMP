/* 3. Write a user-defined function in C++ to display the multiplication of row element of two-dimensional array
 A[4][6] containing integer.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4][6], prod;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[i][j];            
        }
    }

    for (int i = 0; i < 4; i++)
    {
        prod=1;

        for (int j = 0; j < 6; j++)
        {
            prod*=arr[i][j];           
        }
        
        cout<<"product of "<<i+1<<" row elements= "<<prod<<endl;
    }

    
    return 0;
}