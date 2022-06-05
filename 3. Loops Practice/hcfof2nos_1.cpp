//Write a C program to find HCF (GCD) of two numbers.

#include<iostream>
using namespace std;

int main()
{
    int no1,no2;
    cin>>no1>>no2;
    int temp,j;

    if(no1>=no2)
    {    
        temp=no1;
        no1=no2;
        no2=temp;
    }
// alternative approach i.e prog 2 is better
    for(int i=no1; i>=1; i--) 
    {
        if(no1%i==0) //factor found
        {
            for (int j = no2; j >=1; j--)  
            {
                if(no2%j==0 && i==j)   //checking if both factors are equal or not
                {    cout<<i;
                    return 0;
                }
            }
            
        }
   
    }

    return 0;
   
}