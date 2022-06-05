/* C program to delete element from an array*/

#include<bits/stdc++.h>
using namespace std;

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

    int position;

    cout<<"enter position of element to delete: ";
    cin>>position;
    
    cout<<"array after deletion is"<<endl;

    for (int i = position-1; i < size-1; i++)
    {
        array[i]=array[i+1];
    }
    
    for (int i = 0; i < size-1; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}