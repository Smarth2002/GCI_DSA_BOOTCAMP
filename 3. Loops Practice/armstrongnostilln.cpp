//Write a C program to print all Armstrong numbers between 1 to n.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum,num,digits,last_digit;

    for (int no = 1; no <= n; no++)
    {
        digits= (int) log10(no)+1;
        num=no;
        sum=0;

        while (num>0)       //dont change no bcz on breaking no it will never reach n and loop will be infinite
        {
            last_digit=num%10;
            sum += round (pow(last_digit,digits));
            num/=10;
        }

        if(sum==no)
            cout<<no<<endl;
    }

    return 0;
    
}