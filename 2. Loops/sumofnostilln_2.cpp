//Write a C program to find sum of all natural numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cin>>n;

    for(int no=1; no<=n; no++)
    {
        sum+=no;
    }

    cout<<"sum is: "<<sum;

    return 0;

}