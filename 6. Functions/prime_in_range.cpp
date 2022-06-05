/*C program to find prime numbers in given range using functions*/

#include<iostream>
#include<math.h>
using namespace std;

void print_primes(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int flag=1;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }

        if(flag)
            cout<<i<<endl;       
    }

    return;
    
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"prime no's in given range are: "<<endl;
    print_primes(a,b);

    return 0;
}