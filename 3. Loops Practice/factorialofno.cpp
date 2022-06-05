//Write a C program to calculate factorial of a number.

#include<iostream>
using namespace std;

int main()
{
    int no,fac=1;
    cin>>no;

    while (no>0)
    {
        fac*=no;
        no--;
    }

    cout<<"factorial of no: "<<fac;

    return 0;
    
}