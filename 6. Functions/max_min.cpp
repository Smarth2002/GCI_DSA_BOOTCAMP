/*Write a C program to find maximum and minimum between two numbers using functions.*/

#include<iostream>
using namespace std;

int max(int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"max is: "<<max(a,b)<<endl;
    cout<<"min is: "<<min(a,b);

    return 0;

}