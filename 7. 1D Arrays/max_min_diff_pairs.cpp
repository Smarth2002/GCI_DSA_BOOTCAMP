/*10.
Consider an integer array, the number of elements in which is determined by the user. 
The elements are also taken as input from the user. 
Write a program to find those pair of elements that has the maximum and minimum difference 
among all element pairs.*/

#include<bits/stdc++.h>
using namespace std;

int min_diff( int array[], int size )
{
    int min_diff = abs (array[0]-array[1]);

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)     //checking all pairs without repetition
        {            
            if( ( abs (array[i] - array[j]) < min_diff ) )  
            {
                    min_diff = abs (array[i]-array[j]); //updating min_diff whenever diff btw any pair is less
            }
        }        
    }

    return min_diff;
}

int max_diff( int array[], int size )
{
    int max=array[0], min=array[0];

    for (int i = 0; i < size; i++)    //we know max diff is between max and min no...so just find those
    {
        if( array[i] > max )
            max=array[i];
        
        if( array[i] < min )
            min=array[i];
    }

    return (max-min);  
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

    cout<<"pairs with minimum differences are: "<<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++) //if any pair matches min_diff then print
        {            
            if( abs (array[i] - array[j]) == min_diff(array, size)  )
                cout<<array[i]<<" and "<<array[j]<<endl;                      
        }        
    }

    cout<<"pairs with maximum differences are: "<<endl;

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++) //if any pair matches max_diff then print
        {           
            if( abs (array[i] - array[j]) == max_diff(array, size)  )
                cout<<array[i]<<" and "<<array[j]<<endl;                      
        }        
    }
   
    return 0;
       
}