/*Write a program to check if a year is leap year or not.*/
/*If a year is divisible by 4 then it is leap year but if the
 year is century year like 2000, 1900, 2100 then it must be divisible by 400.*/

#include<iostream>
using namespace std;

int main()
{
    int yr;
    cin>>yr;

    if(yr%100==0)
    {
        if(yr%400==0)
            cout<<"leap year";
        else
            cout<<"not a leap year";
        
    }
    
    else
    {
        if(yr%4==0)
            cout<<"leap year";
    }

    return 0;
    
}