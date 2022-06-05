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

/* we traverse and transfer all the elements of string into a temporary string until '*'
and on reaching '*' we count the no of 'O's that survive */

        string battle="";

        int ans=0, count=0;

        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] != '*')
                battle+=str[i]; //adding elements ('X's and 'O's)
            else
            {
                for (int j = 0; j < battle.size(); j++) //checking Os that will survuve
                {
                    if(battle[j] == 'O')                                       
                        count++;    
                                  
                    else //if 'X' is found then count=0 and stop checking further Os as all will die
                    {
                        count=0;
                        break;
                    }
                }

                ans+=count; //count may or may not be 0 so add to ans
                count=0; //reset the count to count other elements that will be added
                battle=""; //make the string empty to check for other elements
            }            
        }
/*as last element may or may not be '*' so Os at end will remain uncounted but will be added in string 
as i is going and adding elements till end so only thing left is to count the remaining elements in string  */

        for (int i = 0; i < battle.size(); i++)
        {
            if(battle[i] == 'O') //same procedure as above but this time without '*' as this may not be present at last 
                count++;
            else
            {
                count=0;
                break;
            }
        }
        
        ans+=count;

        cout<<ans<<endl;
    }
    
    return 0;
}