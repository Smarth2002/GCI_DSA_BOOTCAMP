//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/count-enemies-5/

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

/* we traverse whole string and keep counting the 'O' until we find an 'X' and on finding 'X'
we set count to 0 and stop counting 'O' until we reach a '*' and on reaching '*' we add the count to ans
(count of elements before every '*' is added) and once again start counting 'Os' */

        int ans=0, flag=1, count=0; //count store count of 'O's between 2 '*'s

        for (int i = 0; i < str.size(); i++)
        {            
            if(str[i] == 'O' && flag) //flag=1 if no 'X' is encountered and 'O's will be counted
                count++;
            else if(str[i] == 'X') //it make count=0 and also flag=0 so that no 'O's are counted now
            {
                count=0;
                flag=0;
            }
            else if(str[i] == '*') //on reaching '*' we add the count to ans and once again set flag=1 and reset counter
            {
                ans+=count;
                count=0; //so that if another '*' just after it is encountered then same count will be added twice to ans
                flag=1;
            }          

            if(i == str.size()-1) //bcz there maybe Os at last which can remain uncounted as there will be no '*' after that
            {
                ans+=count; //so special case made for last element
            }                                       
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}