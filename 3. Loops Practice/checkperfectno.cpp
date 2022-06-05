//Write a C program to check whether a number is Perfect number or not.

#include<iostream>
using namespace std;

int main()
{
    int no;
    cin>>no;
    
    int sum=0;

    for (int i = 1; i <= no/2; i++) //checking till no/2 save time bcz (no/2)*2=no so no/2 is last factor after this only factor is no itself which gives no on multiplying by 1
    {
        if(no%i==0)
            sum+=i;       
    }

    if(sum==no)
        cout<<"perfect no";
    else
        cout<<"not perfect no";
    
    return 0;
}