//7. Write a program to find a substring within a string. If found display its starting position.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    getline(cin, str1);
    getline(cin, str2);

    int size1, size2;

    for (size1 = 0; str1[size1] != '\0'; size1++);
    for (size2 = 0; str2[size2] != '\0'; size2++);
    
    int i, j;

    for (i = 0; i <= size1 - size2; i++) //not traverse whole string bcz comparison made inside and i marks only starting of substring
    {
        for (j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i+j] != str2[j])
            {
                break;
            }
        }
        
        if(str2[j] == '\0')
        {
            cout<<"substring found at position "<<i+1;
            break;
        }
    }
    
    return 0;
}