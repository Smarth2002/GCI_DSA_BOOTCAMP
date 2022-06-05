//Write a C program to convert Binary to Octal number system.

#include<iostream>
using namespace std;

int main()
{
    int bin,oct=0;
    cin>>bin;

    int place=1;

    while (bin>0)
    {
        int digits=bin%1000;
        int digit;

        switch (digits)
        {
        case 0:
            digit=0;
            break;
        case 1:
            digit=1;
            break;
        case 10:
            digit=2;
            break;
        case 11:
            digit=3;
            break;
        case 100:
            digit=4;
            break;
        case 101:
            digit=5;
            break;
        case 110:
            digit=6;
            break;
        case 111:
            digit=7;
            break;
        default:
            break;
        }

        oct=digit*place+oct; //bcz we if we want 67 we get 7 first and 6 later we so 6*10+7(digit*place+octal)
        place*=10;     //later digits reqd at greater place values like after 6 if we get 5 then 5*100+67(digit*100+oct)
        bin/=1000;
    }

    cout<<"octal no: "<<oct;

    return 0;
    
}