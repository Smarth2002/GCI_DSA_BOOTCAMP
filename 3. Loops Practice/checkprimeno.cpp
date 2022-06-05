//Write a C program to check whether a number is Prime number or not.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no;
    cin>>no;
    bool flag=0;

    if (no<=1)
    {
        flag=1;
    }
    else
    {

        for (int i = 2; i < sqrt(no); i++) //checking till sq root no bcq any no greater will give no on multiplying by same no covered btw 2 to that sq root as sq of root(no)=no
        {
            if(no%i==0)
            {
                flag=1;
                break;
            }
                
        }
    }

    if(flag)
        cout<<"not prime no";
    else
        cout<<"prime no";

    return 0;
    
}