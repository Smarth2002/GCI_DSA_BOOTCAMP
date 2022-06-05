/*Write a C program to find cube of any number using function.*/

#include<iostream>
using namespace std;

int cube(int no)
{
    return no*no*no;
}

int main()
{
    int no;
    cin>>no;

    cout<<"cube is: "<<cube(no);

    return 0;
}