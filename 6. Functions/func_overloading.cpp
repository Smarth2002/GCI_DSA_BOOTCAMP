#include<iostream>
using namespace std;

int add(int a, int b) //1
{
    cout<<"func 1 ";
    return (a+b);
}

double add(double a, double b) //2
{
    cout<<"func 2 ";
    return (a+b);
}

int add(int a, int b, int c) //3
{
    cout<<"func 3 ";
    return (a+b+c);
}

double add(int a, double b) //4
{
    cout<<"func 4 ";
    return (a+b);
}

double add(double a, int b) //5
{
    cout<<"func 5 ";
    return (a+b);
}

int main()
{
    cout<<add(1,2)<<endl; //1
    cout<<add(1.1111,2.1111)<<endl; //2
    cout<<add(1,2,3)<<endl; //3
    cout<<add(1,2.1111)<<endl; //4
    cout<<add(1.1111,2)<<endl; //5

    return 0;
}