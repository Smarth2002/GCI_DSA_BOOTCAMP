/*Define a function named 'perfect' that determines if parameter number is a perfect number. 
Use this function in a program that determines and prints all the perfect numbers between 1 and 1000.*/

#include<iostream>
using namespace std;

int isperfect(int no)
{
    int sum=0;

    for (int i = 1; i <= no/2; i++)
    {
        if(no%i==0)
            sum+=i;
    }

    if(sum==no)
        return true;
    else
        return false;
    
}

int main()
{
    int a,b;
    cin>>a>>b;

    for (int i = a; i <= b; i++)
    {
        if( isperfect(i) )
            cout<<i<<endl;
    }

    return 0;
    
}