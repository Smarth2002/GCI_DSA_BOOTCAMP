//Write a C program to find sum of all odd numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no=1,sum=0;

    for ( no = 1; no <= n; no++)
    {
        if(no%2!=0)
            sum+=no;
    }

    cout<<"sum is: "<<sum;

    return 0;
    

}