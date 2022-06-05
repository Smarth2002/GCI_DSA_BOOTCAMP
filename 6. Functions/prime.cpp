/*Define a function to find out if number is prime or not.*/

#include<iostream>
#include<math.h>
using namespace std;

void isprime(int no)
{
    int flag=0;

    if(no<2)
    {
        cout<<"neither prime nor composite";
        return;
    }

    for (int i = 2; i <= sqrt(no); i++)
    {
        if(no%i==0)
        {
            flag=1;
            break;
        }
    }

    if(flag)
        cout<<"not prime";
    else
        cout<<"prime";

    return;
    
}

int main()
{
    int no;
    cin>>no;

    isprime(no);

    return 0;
}