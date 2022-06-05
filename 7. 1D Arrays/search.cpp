/*2.
Take 10 integer inputs from user and store them in an array. Again ask user to give a number. 
Now, tell user whether that number is present in array or not.*/

#include<iostream>
using namespace std;

int search(int array[], int size, int element)
{
    for (int i = 0; i < 10; i++)
    {
        if( element == array[i] )
            return i;
    }

    return -1;
}

int main()
{
    int array[10], element;

    cout<<"enter 10 values: "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cin>>array[i];
    }

    cout<<"enter element to search: ";
    cin>>element;

    if( search( array, 10, element ) >= 0 )
        cout<<"element "<<array[ search( array, 10, element ) ]
        <<" found at index "<<search( array, 10, element );
    
    else
        cout<<"element "<<element<<" not found.";
    
    return 0;
}

