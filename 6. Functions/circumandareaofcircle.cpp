//Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.

#include<iostream>
using namespace std;

void circum_area (int rad)
{
    cout<<"circumference :"<<(2*3.14*rad)<<endl;
    cout<<"area :"<<(3.14*rad*rad);

    return;
}

int main()
{
    int rad;
    cin>>rad;

    circum_area(rad);

    return 0;
}