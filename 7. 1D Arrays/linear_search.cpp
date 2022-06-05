#include<iostream>
using namespace std;

int linear_search(int Array[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if(element==Array[i])
            return i;                //will be >=0
    }
    
    return -1;                 //return negative value if element not found
}

int main()
{
    int size,element;

    cout<<"enter size of array";
    cin>>size;

    int Array[size];     //first asking size than creating array of that size

    for (int i = 0; i < size; i++)
    {
        cin>>Array[i];
    }

    cout<<"enter element to search";
    cin>>element;

    if( linear_search( Array, size, element ) >= 0 )                  //element found and index will be returned
        cout<<"element "<<Array[ linear_search(Array, size, element) ] //same as <<element...bcz element found
            <<" found at index "<<linear_search(Array, size, element);
    
    else
        cout<<"element "<<element<<" not found.";

    return 0;
    
}