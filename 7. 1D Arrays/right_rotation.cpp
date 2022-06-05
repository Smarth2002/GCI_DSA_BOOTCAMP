/* C program to right rotate an array*/

#include<bits/stdc++.h>
using namespace std;

void right_rotate( int array[], int size, int n )
{
    for (int i = 1; i <= n; i++)
    {
        int temp=array[size-1];

        for (int j = size - 1; j > 0; j--)
        {
            array[j]=array[j-1];
        }
        
        array[0]=temp;
    }
    
    return;
}

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;
    int array[size];

    cout<<"enter elements"<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int n;
    cout<<"enter no of times to rotate right: ";
    cin>>n;

    right_rotate(array, size, n);

    cout<<"array after rotation is"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}