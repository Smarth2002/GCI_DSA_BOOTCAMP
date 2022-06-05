/* Write a C program to merge two array to third array.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size1, size2;
    cout<<"enter size of 2 arrays"<<endl;
    cin>>size1>>size2;

    int array1[size1], array2[size2];

    cout<<"enter elements of 1st array"<<endl;

    for (int i = 0; i < size1; i++)
    {
        cin>>array1[i];
    }

    cout<<"enter elements of 2nd array"<<endl;

    for (int i = 0; i < size2; i++)
    {
        cin>>array2[i];
    }

    int i, j=0, k=0 , ans[size1+size2];

    for (i = 0; i < size1+size2; i++)
    {
        if( j > size1-1 || k > size2-1 ) //checking if one of the array is completed i.e (j or k exceeded size-1) eg incase of (1,2,3) (4,5,6)
            break;

        if( array1[j] < array2[k] )
        {
            ans[i]=array1[j];
            j++;
        }
        else
        {
            ans[i]=array2[k];
            k++;
        }
    }

    /* either array 1 will be incomplete or array 2 so checking that and filling so checking both 
    and filling without comparing as one will be already completed */

    while ( j < size1 ) 
    {
        ans[i]=array1[j];
        i++;
        j++;
    }

    while ( k < size2 )
    {
        ans[i]=array2[k];
        i++;
        k++;
    }
    
    for (int i = 0; i < size1+size2; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}