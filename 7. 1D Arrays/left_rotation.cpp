/* C program to left rotate an array*/

#include<bits/stdc++.h>
using namespace std;

void left_rotate( int array[], int size, int n )
{
    for (int i = 1; i <= n; i++)
    {    
        int temp=array[0];

        for (int j = 0; j < size-1; j++)
        {
            array[j]=array[j+1];
        }
        
        array[size-1]=temp;
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
    cout<<"enter no of times to rotate left: ";
    cin>>n;

    left_rotate(array, size, n);
    
    cout<<"array after rotation is"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}