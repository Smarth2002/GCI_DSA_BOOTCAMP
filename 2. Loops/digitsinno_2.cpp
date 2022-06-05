//Write a C program to count number of digits in a number.

#include<iostream>
using namespace std;

int main()
{
    int num,digit=0;
    cin>>num;

    while(num>0)
    {
        digit++;
        num/=10;
    }

    cout<<"no of digits: "<<digit;

    return 0;
}