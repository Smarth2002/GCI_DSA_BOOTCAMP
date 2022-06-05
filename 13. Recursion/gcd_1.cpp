//https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    static int div;

    if(a < b)
        div=a;
    else
        div=b;

    if(a % div == 0 && b % div == 0)
        return div;

    div--;
    return gcd(a, b);
}

int main()
{
    cout<<gcd(50, 10);
    return 0;
}