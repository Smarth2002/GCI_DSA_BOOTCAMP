//Write a C program to convert Binary to Octal number system.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int bin,dec=0,oct=0;
    cin>>bin;

    int digit;

    int pow_of_2=1;    //power of 2 i.e 2^0

    while (bin>0)
    {        
        digit=bin%10;
        dec = dec + digit*pow_of_2;
        bin/=10;
        pow_of_2*=2;       
    }

    cout<<"decimal no: "<<dec<<endl;

    int pow_of_8=1;

    while (pow_of_8<=dec)   //to make largest no in power of 8 to divide no ..
    {
        pow_of_8*=8;
    }
/*we need largest power of 8 less then no but it will make it bigger then it exit loop 
  so we have to go 1 iteration back to make it largest as well as smaller then no 
  ..it was also fine with pow_of_8<dec for no= powers of 8 but on coming out of loop it will get smaller
  so we also iterated it one more time by pow_of_8<=dec*/

    pow_of_8/=8;

    int oct_no; //its the quotient of division btw no and pow_of_8

    while(dec>0)
    {
        oct_no=dec/pow_of_8;
        oct = oct*10 + oct_no;
        dec = dec - oct_no*pow_of_8;
        pow_of_8/=8;
    }

    cout<<"octal no: "<<oct;

    return 0;
    
    

}