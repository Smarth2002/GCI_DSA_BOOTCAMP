//https://www.geeksforgeeks.org/program-for-factorial-of-a-number/

#include<bits/stdc++.h>
using namespace std;

int fac(int n)
{
    if(n == 0)
        return 1;
    
    return fac(n-1)*n;
}

int main()
{
    cout<<fac(3);

    return 0;
}