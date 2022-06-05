/* C program to find reverse of array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    
    for (int i = 0; i < size/2; i++)
    {
        int temp=array[i];
        array[i]=array[size-1-i];
        array[size-1-i]=temp;
    }
    
    for (int  i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
}