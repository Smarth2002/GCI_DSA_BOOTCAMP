//Write a C program to print all even numbers between 1 to 100. - using while loop

#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int no=a;

    while (no<=b)
    {
        if(no%2==0)
            cout<<no<<endl;
        
        no++;
    }

    return 0;
    
}