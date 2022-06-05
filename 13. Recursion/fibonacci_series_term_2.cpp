//https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<bits/stdc++.h>
using namespace std;

int value[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int fibo1(int n)
{
    if(value[n] != -1)
        return value[n];
    else
    {
        if(n <= 1)
        {
            value[n]=n;
            return value[n];
        }

        value[n]=fibo1(n-2)+fibo1(n-1);
        return value[n];
    }
    
}

int value[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};

int fibo(int n)
{
    if(n <= 1)
    {
        value[n]=n;
        return n;
    }
    else
    {
        if(value[n-2] == -1)
            value[n-2]=fibo(n-2);
        if(value[n-1] == -1)
            value[n-1]=fibo(n-1);
        
        value[n]=value[n-2]+value[n-1];
        return value[n];
    }
}


int main()
{
    cout<<fibo1(7);

    return 0;
}