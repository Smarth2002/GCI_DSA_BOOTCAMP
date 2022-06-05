/* Write a C program to put even and odd elements of array in two separate array.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size], even[size], odd[size], j=0, k=0;

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];

        if( array[i] % 2 == 0 )
        {
            even[j]=array[i];
            j++;
        }
        else
        {
            odd[k]=array[i];
            k++;
        }
    }
    
    cout<<"even array is ";

    for (int i = 0; i < j; i++)
    {
        cout<<even[i]<<" ";
    }
    
    cout<<endl<<"odd array is ";

    for (int i = 0; i < k; i++)
    {
        cout<<odd[i]<<" ";
    }

    return 0;
}