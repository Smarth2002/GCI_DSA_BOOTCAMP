////https://www.geeksforgeeks.org/program-to-calculate-ex-by-recursion/

#include<bits/stdc++.h>
using namespace std;

float fac(int n)
{
    if(n == 0)
        return 1;
    
    return fac(n-1)*n;
}

float taylorSeries(int x, int n)
{
    if(n == 0)
        return 1;
    
    return taylorSeries(x, n-1) + ((float) pow(x, n)/(float) fac(n));
}

int main()
{
    cout<<taylorSeries(4, 15);

    return 0;
}