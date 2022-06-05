/* 4.Sorting refers to arranging data in a particular format. Sort an array of integers in ascending order. 
One of the algorithm is selection sort. Use below explanation of selection sort to do this.
INITIAL ARRAY :
2	3	1	45	15
First iteration : Compare every element after first element with first element and if it is larger then swap.
 In first iteration, 2 is larger than 1. So, swap it.
1	3	2	45	15
Second iteration : Compare every element after second element with second element and if it is larger then swap. 
In second iteration, 3 is larger than 2. So, swap it.
1	2	3	45	15
Third iteration : Nothing will swap as 3 is smaller than every element after it.
1	2	3	45	15
Fourth iteration : Compare every element after fourth element with fourth element and if it is larger then swap.
 In fourth iteration, 45 is larger than 15. So, swap it.
1	2	3	15	45
 */

#include<bits/stdc++.h>
using namespace std;

void selection_sort( int array[], int size )
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if( array[i] > array[j] )
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
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

    selection_sort(array, size);

    for (int i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    
    return 0;
}