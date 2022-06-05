/* C program to insert element in array*/ 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array1[size], array2[size+1];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array1[i];
    }

    int element, position;

    cout<<"enter element to insert and position:"<<endl;
    cin>>element>>position;

    for (int i = 0; i < size+1; i++)
    {
        if( i < position-1 )
            array2[i]=array1[i];
        else if( i == position-1 )
            array2[i]=element;
        else
            array2[i]=array1[i-1];
    }
    
    cout<<"new array is"<<endl;

    for (int i = 0; i < size+1; i++)
    {
        cout<<array2[i]<<" ";
    }
    
    return 0;
}