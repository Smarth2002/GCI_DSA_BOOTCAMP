#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int no)
{
    for (int i = 2; i <= sqrt(no); i++)
    {
        if(no%i==0)
            return false;
    }

    return true;
}

int isArmstrong(int no)
{
    int digits=log10(no)+1;
    int copy=no,sum=0;

    while (copy!=0)
    {
        sum = sum + pow( copy%10 , digits );
        copy/=10;
    }

    if(sum==no)
        return true;
    else
        return false;
    
}

int isPerfect(int no)
{
    int sum=0;

    for (int i = 1; i <= no/2; i++)
    {
        if(no%i==0)
            sum+=i;        
    }

    if(sum==no)
        return true;
    else
        return false;
    
}

int main()
{
    int no;
    cin>>no;

    if(isPrime(no))
        cout<<"prime"<<endl;
    else
        cout<<"not prime"<<endl;

    if(isArmstrong(no))
        cout<<"armstrong"<<endl;
    else
        cout<<"not armstrong"<<endl;

    if(isPerfect(no))
        cout<<"perfect"<<endl;
    else
        cout<<"not perfect"<<endl;

    return 0;
}