//https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/

#include<bits/stdc++.h>
using namespace std;

//using eucledian algorithm

int gcd_1(int a, int b)
{
    if(a == b)
        return a;

    if(a > b)
        return gcd_1(a-b, b);
    else
        return gcd_1(a, b-a);
}

int gcd_2(int a, int b)
{
    if(a == 0)
        return b;

    return gcd_2(b%a, a);
}

int main()
{
    cout<<gcd_1(10, 50)<<" "<<gcd_2(10, 50)<<endl;
    cout<<gcd_1(10, 15)<<" "<<gcd_2(10, 15)<<endl;

    return 0;
}