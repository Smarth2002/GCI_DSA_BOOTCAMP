#include<iostream>
using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;

    cout<<"input 2 numbers: ";
    cin>>a>>b;

    cout<<"addition of 2 numbers is: "<<add(a,b);

    return 0;
}