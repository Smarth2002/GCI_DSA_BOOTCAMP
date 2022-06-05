//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/lexical-analyzer-3/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

/*we will get t strings and we have to print output combined for all 
so we set curr_str as the variable name/ substring till '=' and compare other substrings with it
and on mismatch increment the ans/ no of variables and set the curr_str with mismatched substring
to check remaining with this mismatched */

    int ans=0; // no of variables
    string curr_str;

    while (t--)
    {
        cin>>ws;
        string str;
        getline(cin, str);

        if(ans == 0) //will be executed only 1 time just to set the string curr_str to compare others
        {
            curr_str=str.substr(0, str.find('=')); // setting curr_str with substring of 1st string
            ans=1;
        }

        if(str.substr(0, str.find('=')) != curr_str) //if different substring/ variable name found, increment ans
        {
            curr_str=str.substr(0, str.find('='));
            ans++;
        }        

    }
    
    cout<<ans<<endl;
    return 0;
}