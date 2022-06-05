//Write a C program to find sum of all even numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sum=0;

    for(int no=1; no<=n; no++)
    {
        if(no%2==0)
            sum+=no;
    }

    cout<<"sum is: "<<sum;

    return 0;
}