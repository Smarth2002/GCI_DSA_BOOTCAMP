//Write a C program to check whether a number is Strong number or not.

#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;
    int sum=0;

    int num=no;

    if(num==0)
        sum=1;

    while (num>0)
    {
        int digit=num%10;
        int fac=1;

        while(digit>0)
        {
            fac*=digit;
            digit--;
        }

        sum+=fac;
        num/=10;
    }

    if(sum==no)
        cout<<"strong no";
    else
        cout<<"not strong no";

    return 0;
    
}