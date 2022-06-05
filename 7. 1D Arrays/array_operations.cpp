#include<iostream>
using namespace std;

void add( int array1[], int array2[], int size )
{
    int add[size];

    cout<<"addition of 2 arrays is"<<endl;

    for (int i = 0; i < size; i++)
    {
        add[i] = array1[i] + array2[i];
        cout<<add[i]<<endl;
    }

    return;
}

void sub( int array1[1], int array2[], int size )
{
    int sub[size];

    cout<<"subtracted array is "<<endl;

    for (int i = 0; i < size; i++)
    {
        sub[i] = array1[i] - array2[i];
        cout<<sub[i]<<endl;
    }
    
    return;
}

void mul( int array1[], int array2[], int size )
{
    int mul[size];

    cout<<"multiplied array is"<<endl;

    for(int i = 0; i < size; i++)
    {
        mul[i] = array1[i] * array2[i];
        cout<<mul[i]<<endl;
    }

    return;
}

int main()
{
    int size;
    cout<<"enter size of arrays: ";
    cin>>size;

    int array1[size], array2[size];

    cout<<"enter 1st array: "<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array1[i];
    }

    cout<<"enter 2nd array: "<<endl;
    
    for (int i = 0; i < size; i++)
    {
        cin>>array2[i];
    }
    
    add( array1, array2, size );
    sub( array1, array2, size );
    mul( array1, array2, size );

    return 0;
}