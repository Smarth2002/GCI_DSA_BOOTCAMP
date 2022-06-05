/* C program to delete duplicate elements from array*/

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
    
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if( array[i] == array[j] ) //if duplicate element found
            {
                for (int k = j; k < size; k++) //legt shift elements after it to delete/ overwrite it
                {
                    array[k]=array[k+1];
                }
                
                j--;   //but next element (j+1) now shifted to current j so decrement it so that j remain there

/* on right shifting copy of last element is created and when j goes to last value it performs left shift and 
decrement j and again perform left shift and again decrement...so infinite loop will be created
so size is decremented on each left shift to avoid checking that copy value */

                size--;
            }
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}