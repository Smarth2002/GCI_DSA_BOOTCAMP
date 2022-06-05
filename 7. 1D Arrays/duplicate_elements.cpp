/* C program count total duplicate elements in array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size:";
    cin>>size;

    int array[size], duplicate=0;

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
            for (int j = i+1; j < size; j++)
            {
                if( array[i] == array[j] )
                    duplicate++;
            }           
        }                  
    }

    cout<<"no of duplicate elements is "<<duplicate;
    
    return 0;
    
}