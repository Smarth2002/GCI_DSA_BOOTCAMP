//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/counting-frog-paths-1abd84d5/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, s, t;
    cin>>x>>y>>s>>t;

    int time_rem=t-(x+y)+1; //steps that frog can move after reaching x,y as frog is at origin first it had to reach x,y
    int ans=0;

    if(time_rem < 1)
        ans=0;
    else if(time_rem >= 2*s)
        ans=(s+1)*(s+1); //all positions
    else
    {
        for (int i = 1; i <= time_rem; i++)
        {
            if(i <= s+1) //bcz if time_rem <= s+1 then no of positions added = time_rem itself
                ans+=i;
            else
            {
                ans=ans+(2*(s+1)-i); //otherwise no of positions to add + time_rem == 2*(s+1)
            }
            
        }
    }
    
    cout<<ans;
    
    return 0;

}