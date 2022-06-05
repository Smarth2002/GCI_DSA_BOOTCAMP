/* 12.
Write a program to print sum, average of all numbers, smallest and largest element of an array. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    int array[size];
    cout<<"enter elements"<<endl;

    double sum=0.0;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
        sum+=array[i];
    }

    cout<<"sum of all elements is "<<sum<<endl<<"average is "<<(sum/size)<<endl;

    int min=array[0], max=array[0];

    for (int i = 0; i < size; i++)
    {
        if(array[i] < min)
            min=array[i];
        if(array[i] > max)
            max=array[i];
    }
    
    cout<<"largest element : "<<max<<endl<<"smallest element : "<<min;

    return 0;
}