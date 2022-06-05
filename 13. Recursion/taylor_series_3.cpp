//https://www.geeksforgeeks.org/program-to-calculate-ex-by-recursion/

#include<bits/stdc++.h>
using namespace std;

float s=1;

float taylor(int x, int n)
{
    if(n == 0)
        return s;

    s=1+((float) x/(float) n)*s;

    return taylor(x, n-1);
}

int main()
{
    cout<<taylor(4, 15);

    return 0;
}