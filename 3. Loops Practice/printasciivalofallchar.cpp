//Write a C program to print all ASCII character with their values.

#include<iostream>
using namespace std;

int main()
{
    char ch;

    for( ch=0; ch<=95; ch++)
    {
        cout<<"ASCII value of "<<ch<<" is: "<<(int) ch<<endl;
    }

    return 0;
}