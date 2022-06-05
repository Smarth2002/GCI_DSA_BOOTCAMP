//https://www.geeksforgeeks.org/decimal-binary-number-using-recursion/

#include<bits/stdc++.h>
using namespace std;

int dec2bin_1(int n)
{
    if(n/2 == 0)
        return 1;

    return dec2bin_1(n/2)*10+n%2;
}

int dec2bin_2(int n)
{
    static int bin=0, fac=1;

    if(n != 0)
    {
        bin=bin+(n%2)*fac;
        fac*=10;
        dec2bin_2(n/2);
    } 

    return bin;
}

int main()
{
    cout<<dec2bin_1(100)<<endl<<dec2bin_2(100);

    return 0;
}