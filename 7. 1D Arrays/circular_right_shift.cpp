/* 2.Write a program to shift every element of an array to circularly right. E.g.-
INPUT : 1 2 3 4 5
OUTPUT : 5 1 2 3 4 */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    cout<<"enter elements"<<endl;

    int array[size];
    
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }

    int temp=array[size-1];

/*//move from right bcz if we move from left and shift than after shifting one element 
other element will be overwrited and same element will be overwrite in all elements
On ahifting from right only last element is lost and we store it in temp */

    for (int i = size-1; i > 0; i--)      
    {
        array[i] = array[i-1];         //it will update array leaving 1st position at 0 index
    }

    array[0]=temp;  //we manually fill it witht temp i.e last element
    
    for (int i = 0; i < size; i++)
    {
        cout<<array[i];
    }
    
    return 0;
}