//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/palindromes-3/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

/* we assume that max length which is not a palindrome is complete string
and check if its a palindrome or not
and if palindrome then remove last element and decrease ans by 1
and repeat the process till string != ""
and in between if string is not palindrome then break the loop and print ans

bcz if we remove last/ first char from any palindrome except equal letters than it will not be palindrome anymore */

    int ans=str.size();

    while(str != "")
    {
        int i;
        
        for ( i = 0; i < str.size()/2; i++) //check palindrome
        {
            if(str[i] != str[str.size()-1-i])
            {                
                break;
            }        
        }
        
        if(i == str.size()/2) //if palindrome
        {
            str.pop_back();
            ans--;
        }
        else
        {
            break;
        }
        
    }

    if(str == "") //bcz if input is o then its a palindrome so ans=0 and str="" but in next iteration it not go inside loop so print here outside the loop
        cout<<"0"<<endl;
    else
        cout<<ans<<endl;

    return 0;
}