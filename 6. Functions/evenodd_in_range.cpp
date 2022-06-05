/*C program to print even or odd numbers in given range */

#include<iostream>
using namespace std;

void print_EvenOdd(int a, int b)
{
    cout<<"even numbers in given range are: "<<endl;

    for (int i = a; i <= b; i++)
    {
        if(i%2==0)
            cout<<i<<endl;
    }

    cout<<"odd numbers in given range are: "<<endl;

    for (int i = a; i <= b; i++)
    {
        if(i%2!=0)
            cout<<i<<endl;
    }

    return;
}

int main()
{
    int a,b;
    cin>>a>>b;

    print_EvenOdd(a,b);

    return 0;
}