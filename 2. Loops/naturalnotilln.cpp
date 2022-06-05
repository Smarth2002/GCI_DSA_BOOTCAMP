/*Write a C program to print all natural numbers from 1 to n. - using while loop*/

#include<iostream>
using namespace std;

int main()
{
    int no=1,n;
    cin>>n;

    while(no<=n)
    {
        cout<<no<<endl;
        no++;
    }

    return 0;


}