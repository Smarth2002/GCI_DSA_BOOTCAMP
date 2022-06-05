/* Write a C program to print all unique elements in the array. */

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
        int flag=1, temp=1;

        for (int j = i-1; j >= 0; j--) //to check for repetition to check only those elements which are not checked earlier
        {
            if( array[i] == array[j] )
            {
                flag=0;
                break;
            }
        }
        
        if(flag)
        {
            for (int j = i+1; j < size; j++) //to check for frequency
            {
                if( array[i] == array[j] )
                {
                    temp=0;
                    break;
                }
            }

            if(temp)
                cout<<array[i]<<" ";
        }
    }
    
    return 0;
}