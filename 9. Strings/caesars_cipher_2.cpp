//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/caesars-cipher-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string S, T;
        cin>>S>>T;

/*if -ve than shifts can be calculated by adding 26 
(as diff is -ve so T[i] alphabet lies behind S[i] but instead of going directly backwards we have to move to z 
and again start from 'a' till that T[i] alphabet)
so ideally formula should be (26 - (S[i]-T[i]) )
it means we completely traverse whole 26 alphabets and come back again to S[i] and then subtract difference to reach T[i]
 but we have calculated -ve val (T[i] - S[i]) so we directly add 26
*/ 

        int ans=-1; //will contain diff of T[0]-S[0] and used to compare other differences

        int i;
        for ( i = 0; i < S.size(); i++)
        {
/*same thing to calculate diff as above
if diff>0 then also give same diff
if diff<0 then adding 26 gives real difference but % is needed to balance positive diff in above eqn*/            
            int diff = ( T[i]-S[i] + 26 ) % 26; 

            if(ans == -1) //will execute only 1st time after that ans will never be -1 and will contain value to compare
            {
                ans=diff; 
            }

            if(ans != diff) //so in 1st case it will never execute as we initialised and with diff
            {
                cout<<"-1"<<endl;
                break;
            }
        }
        
        if(i == S.size())
            cout<<ans<<endl;
    }

    return 0;
}