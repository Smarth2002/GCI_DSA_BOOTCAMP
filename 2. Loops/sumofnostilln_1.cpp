//Write a C program to find sum of all natural numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n>=0)
        cout<<"sum is: "<<(n*(n+1))/2;

    return 0;
}