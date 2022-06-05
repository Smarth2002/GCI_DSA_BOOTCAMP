//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/caesars-cipher-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string S, T;
        cin>>S>>T;

        int diff=T[0]-S[0]; //this is +ve if T[i] > S[i] and simply we get shifts/ difference
/*if -ve than shifts can be calculated by adding 26 
(as diff is -ve so T[i] alphabet lies behind S[i] but instead of going directly backwards we have to move to z 
and again start from 'a' till that T[i] alphabet)
so ideally formula should be (26 - (S[i]-T[i]) )
it means we completely traverse whole 26 alphabets and come back again to S[i] and then subtract difference to reach T[i]
 but we have calculated -ve val (T[i] - S[i]) so we directly add 26
*/                
        if(diff < 0) 
            diff+=26;

        int i;
        for ( i = 1; i < S.size(); i++)
        {
            int curr_diff=T[i]-S[i];
            //same procedure as above
            if(curr_diff < 0)
                curr_diff+=26;

            if(curr_diff != diff) //if anyone diff is not same simply break as its not possible by caesars cipher
            {
                cout<<"-1"<<endl;
                break;
            }
            
        }

        if(i == S.size())
            cout<<diff<<endl;
    }

    return 0;
    
}