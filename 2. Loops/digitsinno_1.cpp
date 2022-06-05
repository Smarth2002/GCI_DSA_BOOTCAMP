//Write a C program to count number of digits in a number.

#include<iostream>
using namespace std;

int main()
{
    int num,digits=0;
    cin>>num;

             /*do while better in this case then while because it will show 1 digit on giving 0 as input 
             but while will not show any output. */
    do      
    {                 
        digits++;
        num/=10;

    } while (num>0);
    



    cout<<"no of digits is: "<<digits;

    return 0;
    
}