//3.	Write a program to check whether a number is even or odd?

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num<1)
    cout<<"please enter a positive number"<<endl;
    else if(num%2==0)
    cout<<"even number"<<endl;
    else
    cout<<"odd number"<<endl;

    return 0;
    
}