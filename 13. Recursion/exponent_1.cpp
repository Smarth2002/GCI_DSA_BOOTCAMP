//https://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/

#include<bits/stdc++.h>
using namespace std;

int exp(int m, int n)
{
    if(n == 0)
        return 1;
    
    return exp(m, n-1)*m;
}

int exp2(int m, int n)
{
    if(n == 0)
        return 1;
    
    if(n % 2 == 0)
        return exp(m*m, n/2);
    else
        return exp(m*m, n/2)*m;
}

int main()
{
    cout<<exp(2, 5);

    return 0;
}