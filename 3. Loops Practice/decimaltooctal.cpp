//Write a C program to convert Decimal to Octal number system.

#include<iostream>
using namespace std;

int main()
{
    int dec,oct=0;
    cin>>dec;

    int pow_of_8=1;

    while (pow_of_8<=dec)
    {
        pow_of_8*=8;
    }
    pow_of_8/=8;

    while (dec>0)
    {
        int oct_no=dec/pow_of_8;
        oct = oct*10 + oct_no;
        dec = dec - oct_no*pow_of_8;
        pow_of_8/=8;
    }

    cout<<"octal no: "<<oct;

    return 0;
    
    
}