//https://www.hackerearth.com/problem/algorithm/monk-and-tasks/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        long int a[n];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        vector<vector<int>> elements(65);

        for (int i = 0; i < n; i++)
        {
            int count=0, no=a[i];

            while (no > 0)
            {
                count++;
                no=no&(no-1);
            }
            
            elements[count].push_back(a[i]);
        }
        
        for (int i = 1; i < 65; i++)
        {
            for (int j = 0; j < elements[i].size(); j++)
            {
                cout<<elements[i][j]<<" ";    
            }           
        }
        
        cout<<endl;
    }
    
    return 0;
}