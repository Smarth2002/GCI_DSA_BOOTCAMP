//https://www.geeksforgeeks.org/function-copy-string-iterative-recursive/

#include<bits/stdc++.h>
using namespace std; 

string copy(string str, string str1)
{
    static int i = 0;

    if(i == str.size())
        return str1;
    
    str1.push_back(str[i]);
    i++;

    return copy(str, str1);
}

int main()
{
    string str="sam";
    string str1="";

    cout<<copy(str, str1);

    return 0;
}