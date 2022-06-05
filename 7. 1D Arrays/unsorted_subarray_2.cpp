/* 11.
If the input array is [10, 12, 20, 30, 25, 40, 32, 31, 35, 50, 60], 
your program should be able to find that the subarray lies between the indexes 3 and 8. */

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

    int max_index, min_index, max, min;

    for (min_index = 0; min_index < size-1; min_index++)
    {
        if( array[min_index] > array[min_index+1] )    //first element after which sorting is disturbed and become temporary min_index
            break;       //to not go further as we got min_index
    }

    if( min_index == size-1 ) //if min_index iteretae till size-1 means sorting is not disturbed
    {
        cout<<"array is sorted";
        return 0;
    }

    for (max_index = size- 1; max_index > 0; max_index--)
    {
        if( array[max_index-1] > array[max_index] )  //first element from end where sorting is disturbed         
            break;        //not decrease further as we need max_index
    }

    min=array[min_index], max=array[max_index]; //can be any element between min_index and max_index

    for (int i = min_index; i <= max_index; i++) //now find min and max element btw min_index and max_index to know their actual positions to further decrease min_index and increase max_index
    {
        if( array[i] > max )
            max=array[i];
        if( array[i] < min )
            min=array[i];
    }

    for (int i = 0; i < min_index; i++) //check from starting..find first  element > min and that is its original position
    {
        if( array[i] > min )
        {
            min_index=i;
            break;           //not go further as after that all elements will be greater as its min value
        }
    }
    
    for (int i = size - 1; i > max_index; i--)
    {
        if( array[i] < max )  //check from last and find first element <max i.e its original position
        {
            max_index=i;
            break;
        }
    }
    
    cout<<"array should be sorted from min index= "<<min_index<<" to max index= "<<max_index;
    
    return 0;
}