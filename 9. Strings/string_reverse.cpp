//8. Write a program to reverse a string

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int size;

    for (size = 0; str[size] != '\0'; size++);

    for (int i = 0; i < size/2; i++)
    {
        int temp=str[i];
        str[i]=str[size-1-i];
        str[size-1-i]=temp;
    }
    
    cout<<str;

    return 0;
    
}