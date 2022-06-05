//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/yet-another-easy-problem-1f3273a0/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int L, R;
        cin>>L>>R;

        int count=0;

        for (int i = L; i <= R; i++)
        {
            int copy=i;

            int j=16;

            while (j <= copy)
            {
                j*=16;
            }
            
            j/=16;

            int hex_sum=0, digit;

            while (copy > 0)
            {
                digit=copy/j;
                hex_sum = hex_sum + digit;
                copy = copy - j*digit; 
                j/=16;                
            }

            int flag=0;
            
            for (int k = hex_sum; k > 1; k--)
            {
                if(hex_sum % k == 0 && i % k == 0)
                {
                    flag=1;
                    break;
                }
            }
            
            if(flag)
                count++;
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}