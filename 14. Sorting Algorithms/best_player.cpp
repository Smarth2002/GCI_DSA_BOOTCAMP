#include<bits/stdc++.h>
using namespace std;

bool compare(string a, string b)
{
    if(a[a.size()-1] == b[b.size()-1])
    {
        if(a < b)
            return true;
        else
            return false;
    }

    if(a[a.size()-1] > b[b.size()-1])
        return true;
    else
        return false;
}

int main()
{
    int n, t;
    cin>>n>>t;
    cin>>ws;

    string s[n];

    for (int i = 0; i < n; i++)
    {
        getline(cin, s[i]);
    }

    for (int i = 1; i <= t; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if( s[j][s[j].size()-1] == s[j+1][s[j+1].size()-1] )
            {
                if(s[j] < s[j+1])
                {
                    string temp=s[j];
                    s[j]=s[j+1];
                    s[j+1]=temp;
                }
            }
            
            if(s[j][s[j].size()-1] > s[j+1][s[j+1].size()-1])
            {
                string temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }

        }
        
        for (int k= 0; k < s[n-i].size()-2; k++)
        {
            cout<<s[n-i][k];
        }
        
        cout<<endl;
    }
    
  
    return 0;
}