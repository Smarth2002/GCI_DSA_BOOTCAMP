//Write a C program to find sum of all prime numbers between 1 to n.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;
    int sum=0;

    for (int no = 2; no <= n; no++)
    {
        for (int i = 2; i <= sqrt(no); i++)
        {
            if(no%i==0)
            {
                flag=1;
                break;
            }
        }

        if(!flag)
            sum+=no;
        
        flag=0;
        
    }

    cout<<"sum of prime no's till n :"<<sum;
    return 0;
    
}