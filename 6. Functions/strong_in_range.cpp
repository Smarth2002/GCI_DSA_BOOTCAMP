/*C program to print all strong numbers between given interval using function*/

#include<iostream>
using namespace std;

void print_strong(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int copy=i;
        int sum=0;

        while (copy!=0)
        {
            int digit=copy%10;
            int fac=1;

            for (int j = 1; j <= digit; j++)
                fac*=j;
            
            sum+=fac;
            copy/=10;            
        }

        if(sum==i)
            cout<<i<<endl;
        
    }

    return;
    
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<"strong no's in given range are: "<<endl;
    print_strong(a,b);

    return 0;
}