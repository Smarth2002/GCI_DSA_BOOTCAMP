//Write a C program to convert Binary to Decimal number system.

#include<iostream>
using namespace std;

int main()
{
    int bin,dec=0;
    cin>>bin;

    int pow_of_2=1;

    while (bin>0)
    {
        int digit=bin%10;
        
        if(digit==1)
            dec = dec + digit*pow_of_2;
            
        pow_of_2*=2;
        bin/=10;
    }

    cout<<"decimal no: "<<dec;

    return 0;
    
}