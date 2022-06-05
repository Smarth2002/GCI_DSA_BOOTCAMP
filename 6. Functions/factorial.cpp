/*Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0*/

#include<iostream>
using namespace std;

int factorial(int no)
{
    int fact=1;

    int i;

    if(no<0)
        i=-no;
    else
        i=no;

    while (i!=0)
    {
        fact*=i;
        i--;
    }

    if(no<0)
        return -fact;
    else
        return fact;
}

int main()
{
    int no;
    cin>>no;

    cout<<"factorial is: "<<factorial(no);

    return 0;
}