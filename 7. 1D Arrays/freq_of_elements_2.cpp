/* Write a C program to count frequency of each element in an array. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size], freq[size];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
        freq[i]=-1;      
    }

    /*initialised bcz freq[i] can assume any junk value including 0 so at line 31 it will fail 
    if that element is not repeated but not enter if block due to junk value*/


    for (int i = 0; i < size; i++)
    {
        int frequency=1;

        for (int j = i+1; j < size; j++)
        {
            if( array[i] == array[j] )
            {
                frequency++;
                freq[j]=0;
            }
        }
        
        if( freq[i] != 0 )
            freq[i]=frequency;
    }
    
    for (int i = 0; i < size; i++)
    {
        if( freq[i] > 0 )
            cout<<"frequency of "<<array[i]<<" is "<<freq[i]<<endl;
    }
    
    return 0;
}