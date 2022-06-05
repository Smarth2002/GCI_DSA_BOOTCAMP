//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/string-division/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

/* we saw that on inputting cccccccccc i.e. 10 times splitting is possible (c, cc, ccc, cccc) 
so min length reqd is 10 if there is only 1 distinct element
and if there are 4 distinct elements than it will also be possible as length>=4 
and for distinct elements >=4 it will always be possible

so we used same method for distinct elements 2 and 3 to find minimum length for which splitting in 4 parts is possible
of different substrings and we found it manually or by help of test cases that min lengths were 7 and 5 respectively
as more the distinct characters less length will be required */

        int freq[26]={}; //to store freq of each alphabet that can exist in string

        for (int i = 0; i < str.size(); i++)
        {
            if(freq[str[i]-'a'] == 0) //to ignore repeted letters and find distinct elements
            {
                freq[str[i]-'a']++;            
            }
        }
        
        int distinct=0;

        for (int i = 0; i < 26; i++) //adding frequencies of distinct elements to find total no of distinct elements
        {
            if(freq[i] != 0)
                distinct++;
        }
        
        if(distinct == 1 && str.size() >= 10)
            cout<<"YES"<<endl;
        else if(distinct == 2 && str.size() >= 7)
            cout<<"YES"<<endl;
        else if(distinct == 3 && str.size() >= 5)
            cout<<"YES"<<endl;
        else if(distinct == 4 && str.size() >= 4)
            cout<<"YES"<<endl;
        else if(distinct > 4)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}