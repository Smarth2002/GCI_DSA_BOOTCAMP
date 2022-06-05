//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sorted-string/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string str;
        cin>>str;
    
/* we find frequency of each alphabet to arrange the letters acc to their frequencies */

        int freq[26]={};

        for (int i = 0; i < str.size(); i++)
        {
            freq[str[i]-'a']++;
        }

/* we append the letters in a new string in order of their increasing frequencies */

        string ans="";
        
        for (int i = 1; ans.size() != str.size(); i++) //append until new string become equal to old string (all alphabets are appended)
        {
/*search for the ith frequency in whole array from 0 to 26 
(alphabetically so that earlier element is inserted first even if more than 1 element has same frequency)
*/
            for (int j = 0; j < 26; j++) 
            {
                if(freq[j] == i)
                {            
                    ans.append(i, j+'a'); //append that j+'a' char i times (i=freq and j = position of char)
                }

            }
            
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}