//Write a C program to calculate product of digits of a number.

#include<iostream>
using namespace std;

int main()
{
    int no,digit,prod=1;
    cin>>no;

    if(no==0)
        prod=0;
    else
    {
        if(no<0)
            no=-(no);
        
        while (no>0)
        {
            digit=no%10;
            prod*=digit;
            no/=10;
        }
        
    }

    cout<<"product of digits: "<<prod;

    return 0;
    
}