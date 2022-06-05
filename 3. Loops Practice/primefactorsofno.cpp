//Write a C program to find all prime factors of a number.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag=0;

    for (int no = 2; no <= n; no++) 
    {
        for (int i = 2; i <= sqrt(no); i++) //first finding prime no's in given range
        {
            if(no%i==0)
            {
                flag=1;
                break;
            }
        }

        if(!flag && n%no==0) //if prime no found check if its a factor also
            cout<<no<<endl;
        
        flag=0;      
    }
// we can do reverse also i.e first checking for factors and then checking it if its prime
    return 0;
    
}