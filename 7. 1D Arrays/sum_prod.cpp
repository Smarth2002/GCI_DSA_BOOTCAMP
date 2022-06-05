/*5.
Write a program to find the sum and product of all elements of an array.*/

#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter size: ";
    cin>>size;

    cout<<"enter elements:"<<endl;

    int array[size], sum=0, prod=1;

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
        sum+=array[i];
        prod*=array[i];
    }

    cout<<"sum of all elements is "<<sum<<endl<<"product of all elements is "<<prod;

    return 0;
    
}