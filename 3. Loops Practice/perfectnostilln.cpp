//Write a C program to print all Perfect numbers between 1 to n.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for (int no = 1; no <= n; no++)
    {
        int sum=0;
        
        for (int i = 1; i <= no/2; i++)
        {
            if(no%i==0)
                sum+=i;
            
        }

        if(sum==no)
            cout<<no<<endl;
        
    }

    return 0;
    
}