//https://www.geeksforgeeks.org/reverse-a-string-using-recursion/

#include<bits/stdc++.h>
using namespace std;

string rev(string str, int n)
{
    static int i=n-1;

    if(i < n/2)
        return str;

    char temp;
    temp=str[i];
    str[i]=str[n-1-i];
    str[n-i-1]=temp;

    i--;

    return rev(str, n); 
}

string rev1(string str)
{
    static int i = 0, j = 0;
    static string revstr="";

    if(str[i] != '\0')
    {
        i++;
        rev1(str);

        i--;
        revstr.push_back(str[i]);
    }

    return revstr;
}

int main()
{
    string str="w3resource";
    cout<<rev(str, 10)<<endl<<str;

    return 0;
}