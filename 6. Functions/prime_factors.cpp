/*Define a function to print the prime factors of a number.*/

#include<iostream>
#include<math.h>
using namespace std;

void prime_factors(int no)
{
    for (int i = 2; i <= no; i++)
    {
        int flag=0;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(!flag && no%i==0)
            cout<<i<<endl;
                
    }
    return;    
}

int main()
{
    int no;
    cin>>no;

    prime_factors(no);

    return 0;
}