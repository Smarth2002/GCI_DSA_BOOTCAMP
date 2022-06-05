//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/password-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int no; //no of passwords in list
    cin>>no;

    string str[no];

    for (int i = 0; i < no; i++)
    {
        cin>>str[i];
    }

/* the password must contain its palindrome so we check every string with remaining strings if any
string in remaining is palindrome of that string and if found (means password is from these 2) 
so print its length and middle char

as there will only be 1 string with its palindrome we have to find that only */

    int i, j;

    for (i = 0; i < no-1; i++)
    {
        reverse(str[i].begin(), str[i].end()); //for palindrome of str to be str1 reverse(str)==str1

        for (j = i+1; j < no; j++)
        {
            if(str[j] == str[i]) //stop searching for palindrome
            {
                cout<<str[j].size()<<" "<<str[j][str[j].size()/2];
                break;
            }
        }
        
        if(j != no) //stop checking palindromes of others
            break;
    }
    
    return 0;
}