//2. Write a program to display string from backward.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

    getline(cin, str);

    int size=0;

    while (str[size] != '0')
    {
        size++;
    }
    
    for (int i = size-1; i >= 0; i--)
    {
        cout<<str[i];
    }
     

    return 0;
}