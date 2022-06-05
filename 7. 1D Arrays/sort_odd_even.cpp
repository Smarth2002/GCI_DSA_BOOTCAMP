/* C program to sort even and odd elements of array separately*/

#include<bits/stdc++.h>
using namespace std;

void sort( int array[], int start, int end )
{
    for (int i = start; i < end-1; i++) //sort first part of even no's
    {
        for (int j = i+1; j < end; j++)
        {
            if( array[j] < array[i] )
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
    int odd_count=0, even_count=0;

    cout<<"enter elements"<<endl;
    
    for (int i = 0; i < size; i++) //taking and input and counting total even and odd no's
    {
        cin>>array[i];

        if( array[i] % 2 == 0 )
            even_count++;
        else
            odd_count++;
    }

    int min=array[0];

    for (int i = 0; i < size; i++)
    {
        if( array[i] < min )
            min=array[i];
    }

    if( min % 2 == 0 )  //if min is even than even elements should be before odd elements
    {
        for (int i = 0; i < even_count; i++) //till all even nos come first..increment i
        {
            if( array[i] % 2 != 0 ) //if odd no found
            {
                for (int j = even_count; j < size; j++) //check from list of remaining no's other than even_count (odd no's area)
                {
                    if( array[j] % 2 == 0 ) //if any even no found there than swap and break
                    {
                        int temp=array[i];
                        array[i]=array[j];
                        array[j]=temp;

                        break;
                    }
                }               
            }  
        }       

        sort( array, 0, even_count );
        sort( array, even_count, size );
    }

    else
    {
        for (int i = 0; i < odd_count; i++) //odd elements before even
        {
            if( array[i] % 2 == 0 )
            {
                for (int j = odd_count; j < size; j++)
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

        sort( array, 0, odd_count );
        sort( array, odd_count, size );
    }
    
    cout<<"array with odd and even elements sorted is"<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" ";
    }

    return 0;
}