/*C program to print sum of even or odd numbers in given range */

#include<iostream>
using namespace std;

void print_sum_EvenOdd(int a, int b)
{
    int sumEven=0,sumOdd=0;

    cout<<"sum of even numbers in given range are: "<<endl;

    for (int i = a; i <= b; i++)
    {
        if(i%2==0)
            sumEven+=i;
    }

    cout<<sumEven<<endl;

    cout<<"sum of odd numbers in given range are: "<<endl;

    for (int i = a; i <= b; i++)
    {
        if(i%2!=0)
            sumOdd+=i;
    }

    cout<<sumOdd;

    return;
}

int main()
{
    int a,b;
    cin>>a>>b;

    print_sum_EvenOdd(a,b);

    return 0;
}