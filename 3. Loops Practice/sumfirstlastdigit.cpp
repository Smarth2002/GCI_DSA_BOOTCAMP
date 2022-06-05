//Write a C program to find sum of first and last digit of a number.

#include<iostream>
using namespace std;

int main()
{
    int no,dig_first,dig_last;

    cin>>no;
    int num=no;

    dig_first=no%10;

    while(no>10)
    {
        no/=10;
    }

    dig_last=no;

    if(num>0 && num<10)
        dig_last=0;

    cout<<"sum of 1st and last digit: "<<dig_first+dig_last;

    return 0;
}