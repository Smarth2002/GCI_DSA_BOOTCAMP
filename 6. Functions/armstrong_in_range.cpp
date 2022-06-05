/*C program to print all Armstrong numbers between given interval using function*/

#include<iostream>
#include<math.h>
using namespace std;

void print_Armstrong(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int copy=i;
        int sum=0;
        int digits=log10(i)+1;

        while (copy!=0)
        {
            sum = sum + (int) round (pow( copy%10, digits ));
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

    cout<<"armstrong no's in given range are: "<<endl;
    print_Armstrong(a,b);

    return 0;
}