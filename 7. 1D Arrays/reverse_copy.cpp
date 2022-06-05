/*Take 10 integer inputs from user and store them in an array. 
Now, copy all the elements in another array but in reverse order.*/

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array1[size], array2[size];

    cout<<"enter elements of 1st array: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array1[i];

        array2[size-1-i]=array1[i]; //taking and storing at 2nd array simultaneously...i th val of 1st array= size-1-i th val of 2nd array
    }

    cout<<"new array is: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<array2[i]<<" ";
    }
    
    return 0;
}