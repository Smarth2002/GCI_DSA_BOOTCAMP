//Write a C program to convert Decimal to Binary number system.

#include<iostream>
using namespace std;

int main()
{
    int dec,bin=0;
    cin>>dec;

    int pow_of_2=1;

    while (pow_of_2<=dec)
    {
        pow_of_2*=2;
    }

    /*since bin no can have 0's at ends when dec no=0 and powers of 2 still remain so it will come out of loop
      so pow_of_2>=1 so that all zeroes are covered afterwards*/

    while (pow_of_2>=1)  
    {
        int bin_no=dec/pow_of_2;
        bin = bin*10 + bin_no;
        dec-=(pow_of_2*bin_no);
        pow_of_2/=2;
    }

    cout<<"binary no: "<<bin;

    return 0;
    
    

}