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

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"unsorted subarray is"<<endl;

    int min_index=size-1, max_index=0, max=array[0];

    for (int i = 0; i < size-1; i++)
    {
        if(array[i] > max)           //update max after after every iteration so that 
            max=array[i];

        if( array[i+1] < array[i] ) //i.e unsorted (0,1,15,25,6,7,30,40,50)
        {
            int j=i;     
/*if smaller element (i+1) is found than start checking from its previous element i.e i 
to the no which is less than (i+1) i.e its ideal position eg 6 is compared with 25,15,1 to find min_digit */

            while ( array[i+1] < array[j] )            
                j--;   //j is the no after which (i+1) th element should be there so min_index= j+1
                        
            if ( (j+1) < min_index ) 
                min_index=j+1;       

/*//so that if another smaller no is found than min_index is updated only if its initial position 
is more small than previous one eg */

            max_index=i+1;          //max_index =i+1 as its not in original position
        }

/*if next element is larger still it may or may not be a part of unsorted array eg 7>6
but is not at its original position so if any no < max than max_index is updated with its index */

        else if( array[i+1] < max )           
            max_index=i+1;           
         
    }
    
    cout<<"min index: "<<min_index<<endl<<"max index: "<<max_index;
    
    return 0;
}