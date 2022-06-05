//Write a program to print the sum of two numbers entered by user by defining your own function.

#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<"sum is: "<<sum(a,b);

    return 0;
}