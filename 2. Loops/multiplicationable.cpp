//Write a C program to print multiplication table of any number.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;

    for (int no = 1; no <= 10; no++)
    {
        cout<<num<<"*"<<no<<"="<<num*no<<endl;
    }

    return 0;
    
}