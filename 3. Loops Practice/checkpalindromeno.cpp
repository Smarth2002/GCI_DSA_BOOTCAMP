//Write a C program to check whether a number is palindrome or not.

#include<iostream>
using namespace std;

int main()
{
    int no,num,rev_no=0;
    cin>>no;

    num=no;

    while (num!=0)
    {
        rev_no = rev_no*10 + num%10;
        num/=10;
    }

    if(no==rev_no)
        cout<<"palindrome no";
    else
        cout<<"not palindrome no";
    
    return 0;
    
}