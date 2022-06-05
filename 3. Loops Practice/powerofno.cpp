//Write a C program to find power of a number using for loop.

#include<iostream>
using namespace std;

int main()
{
    int no,power;
    cin>>no>>power;

    int ans=1;

    for(int counter=1; counter<=power; counter++)
    {
        ans*=no;
    }

    cout<<no<<" raised to power "<<power<<" is: "<<ans;

    return 0;
}