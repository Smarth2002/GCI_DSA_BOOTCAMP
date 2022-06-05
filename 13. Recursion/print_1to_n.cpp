//https://www.geeksforgeeks.org/print-numbers-1-n-using-indirect-recursion/

#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==1)
        cout<<1;
    else
    {               //for printing n to 1
        print(n-1); //cout<<n;
        cout<<n;    //print(n-1);
    }
}

int main()
{
    print(5);
    return 0;
}