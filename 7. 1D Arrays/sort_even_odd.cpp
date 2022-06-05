/* C program to sort even and odd elements of array separately*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size]; 
    int odd_count=0, even_count=0;

    cout<<"enter elements"<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];

        if( array[i] % 2 == 0 )
            even_count++;
        else
            odd_count++;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if( array[j] < array[i] )
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }

    cout<<"odd no's="<<odd_count<<"     "<<"even no's="<<even_count;
    
    if( array[0] % 2 ==0 )
    {
        for (int i = 1; i < even_count; i++)
        {
            if( array[i] % 2 != 0 )
            {
                for (int j = i+1; j < size; j++)
                {
                    if( array[j] % 2 == 0 )
                    {
                        int temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;

                        break;
                    }
                } 
            }
        }  
        for (int i = even_count; i < size-1; i++)
        {
            for (int j=i+1; j < size; j++)
            {
                if( array[j] < array[i] )
                {
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
            
        }
        
    }

    else
    {
        for (int i = 1; i < odd_count; i++)
        {
            if( array[i] % 2 == 0 )
            {
                for (int j = i+1; j < size; j++)
                {
                    if( array[j] % 2 != 0 )
                    {
                        int temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;

                        break;
                    }
                } 
            }
        }  
        for (int i = odd_count; i < size-1; i++)
        {
            for (int j=i+1; j < size; j++)
            {
                if( array[j] < array[i] )
                {
                    int temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
            
        }
    }
    
    cout<<"array with sorted even and odd elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}