//Write a C program to print Fibonacci series up to n terms.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int no1=0,no2=1;   //initialise first 2 terms as they are fixed and sum cant be calculated for first 2 terms

    for (int i = 1; i <= n; i++)
    {
        cout<<no1<<endl;

/*each time only first term will be printed so every time first term has to be made second term and second term 
has to be the third by doing sum of first and second ...and so on*/

        int temp=no2;  //if we directly update no1=no2 then the sum will not be correct as sum should be of prev 2 terms not 2 times the prev term.
        no2=no1+no2; //if we directly update no2=no1+no2 then no2 val will be lost to update no1 so we store it in temp variable
        no1=temp;
    }

    return 0;
    
}