#include<iostream>
using namespace std;

int binary_search( int array[], int size, int element )
{
    int low=0, high=size-1;

    while ( low<=high )                 //because at last comparison mid=low=high and after that either low=mid+1 i.e (greater than high) or high=mid-1 i.e (less than low) so both cases violate condition (low<=high)
    {
        int mid=(low+high)/2;

        if( array[mid]==element )
            return mid;
        else if( element > array[mid] )
            low=mid+1;                  //cutting the search space before mid i.e (by half)
        else
            high=mid-1;                 //cutting the search space after mid i.e (by half)
    }
    
    return -1;
}

int main()
{
    int size,element;

    cout<<"enter size of array: ";
    cin>>size;

    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"enter element to search: ";
    cin>>element;

    if( binary_search( array, size, element ) >= 0 )
        cout<<"element "<<array[ binary_search(array, size, element) ]
        <<" found at index "<<binary_search(array, size, element);
    
    else
        cout<<"element "<<element<<" not found";

    return 0;
    
}