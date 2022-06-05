/*7.
Find the largest and smallest elements of an array.*/

#include<iostream>
using namespace std;

int max( int array[], int size )
{
    int max=array[0];

    for (int i = 0; i < size; i++)
    {
        if( array[i] > max )
            max=array[i];      //updating max when a bigger element is encountered
    }
    
    return max;
}

int min( int array[], int size )
{
    int min=array[0];

    for (int i = 0; i < size; i++)
    {
        if(array[i] < min)
            min=array[i];     //updating min when a bigger element is encountered
    }
    
    return min;
}

int main()
{
    int size;
    cout<<"enter size of array: ";
    cin>>size;

    int array[size];

    cout<<"enter elements of array: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    cout<<"largest element is: "<<max(array, size)<<endl<<"smallest element is: "<<min(array, size);
    
    return 0;
}