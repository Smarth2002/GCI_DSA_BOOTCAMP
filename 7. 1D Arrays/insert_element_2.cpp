/* C program to insert element in array*/ 



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size+1];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int element, position;

    cout<<"enter element to insert and position:"<<endl;
    cin>>element>>position;

    for (int i = size; i >= position; i--) //by right shifting in array more than size
    {
        array[i]=array[i-1];
    }
    
    array[position-1]=element;
    
    cout<<"new array is"<<endl;

    for (int i = 0; i < size+1; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}