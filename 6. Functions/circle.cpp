/*Write a C program to find diameter, circumference and area of circle using functions.*/

#include<iostream>
using namespace std;

void circle(int rad)
{
    cout<<"diameter: "<<2*rad<<endl;
    cout<<"circumference: "<<2*3.14*rad<<endl;
    cout<<"area: "<<3.14*rad*rad;

    return;
}

int main()
{
    int rad;
    cin>>rad;

    circle(rad);

    return 0;
}