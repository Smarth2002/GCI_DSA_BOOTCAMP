//Write a C program to print all Strong numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;

    for (int no = 1; no <= n; no++)
    {
        int num=no;
        int sum=0;

        while (num>0)
        {
            int digit=num%10;
            int fac=1;

            while (digit>0)
            {
                fac*=digit;
                digit--;
            }

            sum+=fac;
            num/=10;            
        }

        if(sum==no)
            cout<<no<<endl;
        
    }

    return 0;
    
}