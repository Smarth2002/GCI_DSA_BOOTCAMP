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

    int i;

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++) //increase i upto which elements are equal
    {
        if(str1[i] != str2[i])
        {
            break;
        }
    }
    
    if( str1[i] == '\0' && str2[i] == '\0') //if limit reaches to null in both strings than both are equal
        cout<<"equal strings";
    else
        cout<<"unequal strings";


    return 0;
}