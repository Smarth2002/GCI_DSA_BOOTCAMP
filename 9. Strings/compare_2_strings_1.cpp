//5. Write a program to compare two strings they are exact equal or not.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;

    cout<<"enter 1st string"<<endl;
    getline(cin, str1);
    cout<<"enter 2nd string"<<endl;
    getline(cin, str2);

    int size1, size2;

    for (size1 = 0; str1[size1] != '\0'; size1++);
    for (size2 = 0; str2[size2] != '\0'; size2++);

    if(size1 == size2)
    {
        int flag=1;

        for (int i = 0; i < size1; i++)
        {
            if(str1[i] != str2[i])
            {
                flag=0;
                break;
            }
        }

        if(flag)
            cout<<"both strings are equal";
        else
            cout<<"strings are unequal";
    }

    else
        cout<<"strings are unequal";

    
    return 0;

}