//Write a C program to find first and last digit of a number.

#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;
    
    int dig_first,dig_last;

    dig_first=no%10;

                        /*breaking till no becomes single digit and it will come out of lopp when single digit remain
                        and we cant use a do-while because it will make a single digit no to 0 without checking
                        condition*/ 
    while (no>=10)      
    {
        no/=10;
    } 
    
    dig_last=no;

    cout<<"first digit: "<<dig_first<<endl<<"last digit: "<<dig_last;

    return 0;
}