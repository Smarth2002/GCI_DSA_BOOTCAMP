//https://www.geeksforgeeks.org/program-to-print-first-n-fibonacci-numbers/

#include<bits/stdc++.h>
using namespace std;

int a=1, b=1;

void fibo(int n)
{
    if(n == 1)
    {
        cout<<a<<" ";
        return;
    }

    if(n== 2)
    {
        fibo(n-1);
        cout<<b<<" ";
        return;
    }

    fibo(n-1);

    cout<<a+b;

    b=a+b;
    a=b-a;

    return;
}

int main()
{

    fibo(8);

    return 0;
}