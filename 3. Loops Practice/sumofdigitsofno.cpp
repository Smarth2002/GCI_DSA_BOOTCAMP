//Write a C program to calculate sum of digits of a number.

#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;

    int digit,sum=0;

    if(no<0)
        no=-(no);

    while(no>0)
    {
        digit=no%10;
        sum+=digit;
        no/=10;
    }

    cout<<"sum of digits: "<<sum;

    return 0;
}