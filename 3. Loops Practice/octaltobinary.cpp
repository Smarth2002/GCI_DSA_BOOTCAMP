//Write a C program to convert Octal to Binary number system.

#include<iostream>
using namespace std;

int main()
{
    int oct,bin=0;
    cin>>oct;

    int place=1;
    

    while (oct>0)
    {
        int digit=oct%10;

        switch (digit)
        {
        case 0:
            digit=0;
            break;
        case 1:
            digit=1;
            break;
        case 2:
            digit=10;
            break;
        case 3:
            digit=11;
            break;
        case 4:
            digit=100;
            break;
        case 5:
            digit=101;
            break;
        case 6:
            digit=110;
            break;
        case 7:
            digit=111;
            break;
        
        default:
            break;
        }

        bin=digit*place+bin;
        oct/=10;
        place*=1000;
    }

    cout<<"binary no: "<<bin;
    
    return 0;
    
    
}