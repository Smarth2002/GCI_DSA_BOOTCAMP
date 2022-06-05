//https://www.geeksforgeeks.org/program-calculate-value-ncr/

#include<bits/stdc++.h>
using namespace std;

int nCr(int n, int r)
{
    if(r == 1)
        return n;

    return ((n-r+1)/r) * nCr(n, r-1);
}

int nCr2(int n, int r)
{
    if(r == 0 || r == n)
        return 1;
    
    return nCr2(n-1, r-1)+nCr2(n-1, r);
}

int main()
{
    cout<<nCr(11, 3);

    return 0;
}