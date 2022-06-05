//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/joker-and-thieves-53e59f4a/

#include<bits/stdc++.h>
using namespace std;

int main()
{
/*
we take each string and whenever we find P we search for T in range (pos of P - k, pos of P +k).
so to find it in given range we cant use string find() but we can search in given range using find() for array
so we traverse the string and convert it in array where 0=thief and 1=police
*/

    int t;
    cin>>t;

    while (t--)
    {
        int n, k;
        cin>>n>>k;

        cin>>ws;

        string str="";
        int count=0, ans=0; //count=no of thieves in a string, ans= total thieves in grid(n strings)

        for (int i = 0; i < n; i++)
        {
            count=0;

            getline(cin, str);

            int a[n]={-1}; //array of same size (n space seperated characters)

            int index=0;

            for (int j = 0; j < 2*n-1; j+=2) //bcz char in string are space seperated so j+=2
            {
                if(str[j] == 'P')               
                    a[index]=1;                
                else if(str[j] == 'T')
                    a[index]=0;
                
                index++;               
            }
            
            for (int j = 0; j < n; j++) //traversing array
            {
/*
here find() also helps to count max thieves for eg(0, 0 , 1 , 1) here if k=2 then thieves =2 bcz
find() return address of 1st occurence of 0 so no 0 will be left if present in range
 */

                if(a[j] == 1)
                {
                    int start=(j-k >= 0) ? j-k : 0; //if k is larger eg (j=2, k=4) then start will be -1 to avoid this we used contition
                    int end=(start+2*k+1 > n) ? n : start+2*k+1; //same for end if k is larger then

                    if( find(a+start, a+end, 0) != a+end ) //search for 0(thief) in given range
                    {
                        *find(a+start, a+end, 0)=-1; //if 0 found then change it to -1 to avoid finding it again
                        count++; //as a thief found so increment count
                    }
                }               
            }
           
            ans+=count; //add count to ans and reset count to 0 for other strings
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}