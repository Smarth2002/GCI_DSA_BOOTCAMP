//1. Write a program to find the length of string.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    
    getline(cin, str);

    int i=0;

    while (str[i]!='\0')
    {
        i++;
    }
    
    cout<<"size is : "<<i<<endl;

    return 0;
}