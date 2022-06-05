//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/ashish-and-binary-matrix-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n, m;
        cin>>n>>m;

        string str[n];

        for (int i = 0; i < n; i++)
        {
            cin>>str[i];
        }
/* check each string with all remaining strings if any 2 strings are equal then those rows(strings) can never
be unique on removing any column(element at same position from both strings ) */
        int i, j;
        for ( i = 0; i < n; i++) 
        {
            for ( j = i+1; j < n; j++)
            {
                if(str[i] == str[j])
                    break;
            }
            
            if(j != n)
                break;
        }
        
        if(i != n)
            cout<<"No"<<endl;
        else    
            cout<<"Yes"<<endl;

    }
    

    return 0;
}