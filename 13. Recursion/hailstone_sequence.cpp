//https://www.geeksforgeeks.org/hailstone-numbers/

#include<bits/stdc++.h>
using namespace std;

void hailstone(int n)
{
    cout<<n<<" ";

    if(n == 1)
        return;
    
    if(n % 2 == 0)
        n/=2;
    else
        n=3*n+1;
    
    hailstone(n);
}

int main()
{
    hailstone(7);

    return 0;
}