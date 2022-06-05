//https://www.geeksforgeeks.org/program-to-find-lcm-of-two-numbers/

#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    static int i=1;

    if(a*i % b == 0)
        return a*i;

    i++;

    return lcm(a, b);
}

int main()
{
    cout<<lcm(11, 17);

    return 0;
}