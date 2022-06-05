//https://www.geeksforgeeks.org/recursive-program-prime-number/

#include<bits/stdc++.h>
using namespace std;

int prime(int n)
{
    static int i=2;

    if(i > sqrt(n))
        return 1;
    if(n % i == 0)
        return 0;
    
    i++;

    return prime(n); 
}

int main()
{
    cout<<prime(107);

    return 0;
}