/*1.
Take 10 integer inputs from user and store them in an array and print them on screen.*/

#include<iostream>
using namespace std;

int main()
{
    int array[10];

    cout<<"enter 10 values: "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cin>>array[i];
    }

    cout<<"entered values are: "<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<array[i]<<endl;
    }

    return 0;
        
}