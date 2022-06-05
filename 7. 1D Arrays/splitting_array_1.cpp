/* 9.
Take an array of 10 elements. Split it into middle and store the elements in two dfferent arrays.
E.g.-
INITIAL array :
58	24	13	15	63	9	8	81	1	78

After spliting :
58	24	13	15	63
9	8	81	1	78 */

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size], array1[size/2], array2[size/2];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];

        if( i < size/2 )
            array1[i] = array[i];
        else
            array2[ i - (size/2) ] = array[i];
    }
    
    cout<<"1st array is"<<endl;

    for (int i = 0; i < size/2; i++)
    {
        cout<<array1[i]<<" ";
    }
    
    cout<<endl<<"2nd array is"<<endl;

    for (int i = 0; i < size/2; i++)
    {
        cout<<array2[i]<<" ";
    }

    return 0;
}