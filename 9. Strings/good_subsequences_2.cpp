///*https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/good-sequences-46c31a23/*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int freq[26]={}, ans=1;  //made an array of all 26 alphabets to store their freq

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i] - 'a']++; //like if str[i]='g' then freq at g-a position i.e 103-97= 6 at 6 index will be incremented
    }
    
    for (int i = 0; i < 26; i++)
    {
        if(freq[i] >0)
            ans*=freq[i];
    }
    
    cout<<ans;

    return 0;
}