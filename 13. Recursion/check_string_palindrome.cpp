//https://www.geeksforgeeks.org/c-program-to-check-if-a-given-string-is-palindrome-or-not/

#include<bits/stdc++.h>
using namespace std;

int checkPalindrome(string str)
{
    static int i=0;

    if(str[i] != str[str.size()-1-i])
        return 0;
    
    if(i == str.size()/2)
        return 1;
    
    i++;
    return checkPalindrome(str);
}

int main()
{
    if(checkPalindrome("lotoool"))
        cout<<"palindrome";
    else
        cout<<"not palindrome";

    return 0;
}