/* C program to delete duplicate elements from array*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size], ans[size];

    cout<<"enter elements"<<endl;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int k=0;

    for (int i = 0; i < size; i++)
    {   
        int flag=1;

        for (int j = i-1; j >= 0; j--)
        {
            if( array[i] == array[j] ) //to check if element is repeated or not
            {
                flag=0;           
                break;
            }
        }

        if(flag) //if element no repeated earlier than put it in new array
        {
            ans[k]=array[i];
            k++;
        }   
    }
    
    for (int i = 0; i < k; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return 0;
}