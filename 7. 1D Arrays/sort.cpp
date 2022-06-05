/* Write a C program to sort array elements in ascending or descending order.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size : ";
    cin>>size;

    int array[size];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if( array[j] < array[i] ) //for descending order if( array[j] > array[i] )
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }  
    }
    
    cout<<"array after sorting in ascending order is"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}