//Write a C program to find LCM of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int no1,no2;
    cin>>no1>>no2;
    int max,min;

    if(no1>no2)
    {
        max=no1;
        min=no2;
    }
    else
    {
        max=no2;
        min=no1;
    }
    
   //multiples of max no is checked till min no bcz lcm will not be less then max no and for big no less multiples have to be checked 
        

    for (int i = 1; i <= min ; i++)   //multiples will be checked till second no as product of 2 nos will always be lcm if no less no is found
    {
        if(max*i % min == 0)
        {
            cout<<max*i;
            break;
        }
       
    }

    return 0;
    
}