/* Write a C program to count frequency of each element in an array. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size:";
    cin>>size;

    int array[size];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    for (int i = 0; i < size; i++)  //checking every element with remaining elements 
    {
        int flag=1;

        for (int j = i-1; j >= 0; j--) //to check if element is repeated so skip it
        {
            if( array[i] == array[j] )
            {
                flag=0;
                break;
            }
        }

        if(flag)
        {
            int freq=1;//because every element has freq=1 and on finding same element from remaining ones it increase

            for (int j = i+1; j < size; j++)
            {
                if( array[i] == array[j] )
                    freq++;
            }

            cout<<"frequency of "<<array[i]<<" is "<<freq<<endl;
            
        }
                   
    }
    
    return 0;
    
}