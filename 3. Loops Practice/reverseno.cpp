//Write a C program to enter a number and print its reverse.

#include<iostream>
using namespace std;

int main()
{
    int no,digit,rev_no=0;
    cin>>no;

    while (no!=0)
    {
        digit=no%10;
        rev_no=rev_no*10+digit;
        cout<<rev_no<<endl;
        no/=10;
    }

    cout<<"reverse no : "<<rev_no;    

    return 0;
}