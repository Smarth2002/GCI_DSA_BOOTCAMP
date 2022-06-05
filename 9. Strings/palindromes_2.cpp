//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/palindromes-3/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

/* first we check if string is already a palindrome or not
if not then max length is length of complete string
and if its a palindrome then we check if it contains all same letters or not
if it does then ans=0 bcz all substrings will be palindromes 
otherwise ans=str.size()-1 bcz if we remove last/ first char from any palindrome except equal letters 
than it will not be palindrome anymore */

    int i;
    for ( i = 0; i < str.size()/2; i++) 
    {
        if(str[i] != str[str.size()-i-1])
            break;
    }
    
    if(i != str.size()/2)
        cout<<str.size();
    else
    {
        int j;
        for ( j = 0; j < str.size()-1; j++)
        {
            if(str[j] != str[j+1])
                break;
        }
        
        if(j == str.size()-1)
            cout<<"0"<<endl;
        else
            cout<<str.size()-1;
    }
    
    return 0;
}