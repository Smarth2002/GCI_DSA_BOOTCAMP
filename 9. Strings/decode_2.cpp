//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/decode-1-6eab2976/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string str, ans;
        cin>>str;

/* traversing the original (encrypted) string and simply appending at the starting and end of ans string

for this ans string is cleared to make it empty */

        ans.clear();
        int length=str.size();

        for (int i = 0; i < str.size(); i++)
        {
            if(length % 2 == 0) //if length even that eppend at starting otherwise at end
            {
                ans.insert(ans.begin(), str[i]);
            }
            else 
            {
                ans.insert(ans.end(), str[i]);
            }
                        
            length--;
        }
        
        cout<<ans<<endl;
    }

    return 0;
}