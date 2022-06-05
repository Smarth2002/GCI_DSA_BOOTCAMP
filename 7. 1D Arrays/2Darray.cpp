/* 6.
Initialize and print all elements of a 2D array.*/

#include<iostream>
using namespace std;

int main()
{
    int rows,cols;

    cout<<"enter rows and columns: ";
    cin>>rows>>cols;

    int array[rows][cols];

    cout<<"enter elements of 2D array"<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>array[i][j];
        }
        
    }
    
    cout<<"elements are"<<endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout<<array[i][j];
        }
        
        cout<<endl;
    }
    
    return 0;
}