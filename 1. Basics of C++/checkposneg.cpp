//4.	Write a program to check whether a number is negative, zero, positive?

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num>0)
    cout<<"positive no";
    else if(num==0)
    cout<<"no is 0";
    else
    cout<<"no is negative";

    return 0;
    
}