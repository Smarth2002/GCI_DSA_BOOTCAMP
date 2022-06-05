/* 1.Take an array of length n where all the numbers are nonnegative and unique. 
Find the element in the array possessing the highest value. 
Split the element into two parts where first part contains the next highest value in the array and 
second part hold the required additive entity to get the highest value. 
Print the array where the highest value get splitted into those two parts.
Sample input: 4 8 6 3 2
Sample output: 4 6 2 6 3 2 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array1[size], array2[size+1];  //array2 is required array, array1 is input array

    cout<<"enter the elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array1[i];
    }
    
    int max=array1[0], max_index, max2=array1[0];

    for (int i = 0; i < size; i++)
    {
        if( array1[i] > max )          
        {
            max=array1[i];
            max_index=i;
        }
    }
/*finding max elemenent and its index..index isreqd bcz while filling array2 we can find where to fill 1st part
by simply comparing the array1 element with max every time 
but we cant determine its next position of 2nd part of additive identity without matching its index */

    for (int i = 0; i < size; i++)
    {
        if( array1[i] > max2 && array1[i] < max ) //finding second largest element
            max2=array1[i];
    }
    
    for (int i = 0; i < size+1; i++)
    {
        if( i == max_index )            // (can also be if(array1[i]==max)) second largest element in place of largest element
        {
            array2[i] = max2;      //1st part
        }
        else if( i == max_index+1 )
            array2[i] = max-max2;     //2nd part of additive identity at next place
        else
        {
            if( i > max_index )
                array2[i] = array1[i-1]; //due to splitting all elements after max_index are shifter by 1
            else
                array2[i] = array1[i];  //before splitting elements are at same indices in both arrays 
        }
    }
    
    for (int i = 0; i < size+1; i++)
    {
        cout<<array2[i]<<" ";
    }
    
    return 0;
}