//Write a C program to find first and last digit of a number.

#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;

    int dig_first,dig_last;

    dig_first=no%10;
    
//can also be done using while but it will not work with 0 due to checking of condition first
    do
    {
        if(no<10)
            dig_last=no;
        
        no/=10;     /*breaking the no and checking each time if its single digit or not till it becomes 0  
                    because at a time it has to become a single digit on breaking*/
        
    }while(no>0);  
    
    cout<<"first digit: "<<dig_first<<endl<<"last digit: "<<dig_last;

    return 0;
}