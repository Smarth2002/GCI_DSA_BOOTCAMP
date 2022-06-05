/* C program to find second largest number in array */

#include<bits/stdc++.h>
using namespace std;

int second_largest( int array[], int size )
{
    int max=array[0], max2=array[0];

    for (int i = 0; i < size; i++)
    {
        if(array[i] > max)
        {
            max2=max;
            max=array[i];
        }
        else if ( array[i] > max2 )
            max2=array[i];
    }
    
    return max2;
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
    
    cout<<"2nd largest element: "<<second_largest(array, size);

    return 0;
    
}