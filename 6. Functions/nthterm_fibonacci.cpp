/*define a function to know nth term of a Fibonacci series.
Nth term of Fibonacci series is */

#include<iostream>
using namespace std;

int nth_fibonacci(int n)
{
    int no1=0,no2=1;

    for (int i = 1; i < n; i++) //since in first term (1st iteration) no1 becomes no2 but first digit is as no1 is initialised i.e 0 so run till n-1(<n) times
    {
        int temp=no2;
        no2=no1+no2;
        no1=temp;
    }

    return no1;
    
}

int main()
{
    int n;
    cin>>n;

    cout<<nth_fibonacci(n);

    return 0;
}