//Write a C program to print all alphabets from a to z. - using while loop

#include<iostream>
using namespace std;

int main()
{
    char alpha='a';

    while(alpha<='z')
    {
        cout<<alpha<<endl;
        alpha++;
    }

    return 0;

}