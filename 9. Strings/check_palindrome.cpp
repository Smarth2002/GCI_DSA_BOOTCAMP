//6. Write a program to check a string is palindrome or not

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int size;

    for (size = 0; str[size] != '\0'; size++);

    int flag=1;

    for (int i = 0; i < size/2; i++)
    {
        if(str[i] != str[size-1-i])
        {
            flag=0;
            break;
        }
    }
    
    if(flag)
        cout<<"palindrome";
    else
        cout<<"not palindrome";
        
    
    return 0;
}