//Write a C program to convert Octal to Decimal number system.

#include<iostream>
using namespace std;

int main()
{
    int oct,dec=0;
    cin>>oct;

    int pow_of_8=1;

    while (oct>0)
    {
        int digit=oct%10;
        dec=dec+digit*pow_of_8;
        pow_of_8*=8;
        oct/=10;
    }

    cout<<"decimal no: "<<dec;

    return 0;
    
}