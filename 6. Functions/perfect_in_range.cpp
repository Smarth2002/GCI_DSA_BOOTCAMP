/*C program to print perfect numbers between given interval using function*/

#include<iostream>
using namespace std;

void print_Perfect(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        int sum=0;

        for (int j = 1; j <= i/2; j++)
        {
            if(i%j==0)
                sum+=j;
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

    cout<<"Perfect no's in given range are: ";
    print_Perfect(a,b);

    return 0;
}