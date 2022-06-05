//Write a C program to check whether a number is Armstrong number or not.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no;
    cin>>no;
    int digit,digits,sum=0;

    digits=log10(no)+1;

    int num=no;
/*round() converts fractional no to nearest integer however data type remains same i.e float/double
 here used bcz compiler giving 5^3=124.9999 so to round it to 125*/
        
    while (no>0)
    {
        digit=no%10;
        sum+=round (pow(digit,digits));  
        no/=10;
    }

    if(sum==num)
        cout<<"armstrong no";
    else
        cout<<"not armstrong no";


    return 0;
    
}