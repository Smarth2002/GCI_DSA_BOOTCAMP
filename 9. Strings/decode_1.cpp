//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/decode-1-6eab2976/

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

/*if we traverse encrypted string from forward then elements are placed in middle of ans string and
filled in left and right direction alternatively

and on traversing from backward elements are placed in first and last position of ans string and
first and last pointers come towards each other */

        string ans(str.size(), 0); //ans string initialised with 0s

        int j=0, k=str.size()-1; //j and k pointers to ans string i.e. right and left respectively
        int dir=1; //dirction=1 for left and 0 for right

        for (int i = str.size() - 1; i >= 0; i--)
        {
            if(dir == 1)
            {
                ans[k]=str[i]; //placed at k position and k decreases
                k--;
                dir=0; //toggling directions so that next element placed at j
            }
            else if(dir == 0)
            {
                ans[j]=str[i];
                j++; //j increases
                dir=1;
            }
        }
        
        cout<<ans<<endl;
        
    }
    
    return 0;
}