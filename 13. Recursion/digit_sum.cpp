//https://www.geeksforgeeks.org/sum-digit-number-using-recursion/

#include<bits/stdc++.h>
using namespace std;

int sum=0;

int digitSum(int n)
{
    if(n > 0)
    {
        return n%10+digitSum(n/10);
    }
    else
        return 0;
}

int main()
{
    cout<<digitSum(105);
    return 0;
}