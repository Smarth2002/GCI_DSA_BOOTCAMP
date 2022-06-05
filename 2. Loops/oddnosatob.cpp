//Write a C program to print all odd number between 1 to 100.

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    for(int no=a; no<=b; no++)
    {
        if(no%2!=0)
            cout<<no<<endl;

    }

    return 0;
}