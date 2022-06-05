//https://www.geeksforgeeks.org/sum-of-natural-numbers-using-recursion/

#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n > 0)
    {
        return n+sum(n-1);
    }

    return 0;
}

int main()
{
    int result=sum(3);
    cout<<result;
}