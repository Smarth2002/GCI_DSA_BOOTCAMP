//Write a C program to find HCF (GCD) of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int no1, no2;
    cin>>no1>>no2;

    int min= (no1>no2) ? no2 : no1;

//better approach bcz less loops 

    for (int i = min; i >= 1; i--)     //min no taken bcz factor will be same so why to check so many nos instead check for small no to minimise iterations
    {
        if(no1%i==0 && no2%i==0)  // check the other no also from same factor to prevent another loop to find its factors again
        {
            cout<<"hcf: "<<i;
            break;
        }
            
    }
    
    return 0;
    
}