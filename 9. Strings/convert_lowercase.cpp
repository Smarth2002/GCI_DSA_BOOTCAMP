//9. Write a program to convert a string in lowercase.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i]+=32;
    }
    
    cout<<str;

    return 0;
}