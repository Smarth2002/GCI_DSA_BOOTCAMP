/*Write a C program to check whether a number is even or odd using functions.*/

#include<iostream>
using namespace std;

int iseven(int no)
{
    if(no%2==0)
        return true;
    else
        return false;
}

int main()
{
    int no;
    cin>>no;

    if(iseven(no))
        cout<<"even";
    else
        cout<<"odd";

    return 0;
}