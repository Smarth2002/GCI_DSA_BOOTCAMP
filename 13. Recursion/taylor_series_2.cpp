////https://www.geeksforgeeks.org/program-to-calculate-ex-by-recursion/

#include<bits/stdc++.h>
using namespace std;

int p=1, f=1;

float e(int x, int n)
{
    float sum;

    if(n == 0)   
        return 1;
    
    sum=e(x, n-1);

    p*=x;
    f*=n;

    return sum+(float) p/ (float) f;
}

int main()
{
    cout<<e(4, 15);

    return 0;
}