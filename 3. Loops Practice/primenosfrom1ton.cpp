//Write a C program to print all Prime numbers between 1 to n.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;

    for (int no = 2; no <= n; no++)//goinh through all no's
    {
        for (int i = 2; i <= sqrt(no) ; i++)  //checking each no for prime
        {
            if(no%i==0)
            {
                flag=1;
                break;  //end checking with other no's
            }
        }

        if(!flag)
            cout<<no<<", ";

        flag=0;
      
    }

    return 0;
    
}