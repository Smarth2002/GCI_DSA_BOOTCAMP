#include<bits/stdc++.h>
using namespace std;

vector<int> NGL(int a[], int n)
{
    vector<int> ngl;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if(s.empty())
        {
            ngl.push_back(-1);
        }
        else if(!s.empty() && s.top().first > a[i])
        {
            ngl.push_back(s.top().second);
        }

        else if(!s.empty() && s.top().first <= a[i])
        {
            while (!s.empty() && s.top().first <= a[i])
            {
                s.pop();
            }
            
            if(s.empty())
                ngl.push_back(-1);
            else if(s.top().first > a[i])
                ngl.push_back(s.top().second);
        }
        s.push({a[i], i});
        //ALTERNATIVE s.push(make_pair(a[i], i));
    }
    
    return ngl;
}

vector<int> StockSpan(int a[], int n)
{
    vector<int> ngl=NGL(a, n);

    for (int i = 0; i < ngl.size(); i++)
    {
        ngl[i]=i-ngl[i];
    }
    return ngl;
}

int main()
{
    int n;
    cin>>n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    vector<int> ans=StockSpan(a, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }   
    
    return 0;
}