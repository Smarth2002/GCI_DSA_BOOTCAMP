//https://www.geeksforgeeks.org/program-for-nth-fibonacci-number/

#include<bits/stdc++.h>
using namespace std;

int fibo1(int n)
{
    if(n <= 1)
        return n;

    return fibo1(n-2)+fibo1(n-1);
}

int a=0, b=1;

int fibo(int n)
{
    if(n <= 1)
        return n;

    fibo(n-1);

    b=a+b;
    a=b-a;

    return b;
}

int main()
{
    cout<<fibo1(7);

    return 0;
}