//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/mirror-of-mahatma-gandhi/

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

/* for same mirror img no should be palindrome as well as all digits should be either 0,1 or 8 
as img is laterally inverted so string will be reversed (so should be palindrome) and 
its characters are also reversed (so should be 0, 1 or 8) */

        int i;
        for ( i = 0; i < str.size()/2; i++)
        {   
            //not a palindrome                  or  if letter in 1st half is neither 0,1 or 8         or    letter in 2nd half is neither 0, 1 or 8 then break if any of these condition is true
            if( (str[i] != str[str.size()-1-i]) || (str[i] != '0' && str[i] != '1' && str[i] != '8') || (str[str.size()-i-1] != '0' && str[str.size()-i-1] != '1' && str[str.size()-i-1] != '8'))
                break;
                                        
        }
        
        //but for odd no of digits midddle element will be left to check if its 0, 1 or 8 so check it outside
        if( (i == str.size()/2) && (str[i] == '0' || str[i] == '1' || str[i] == '8') )
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}