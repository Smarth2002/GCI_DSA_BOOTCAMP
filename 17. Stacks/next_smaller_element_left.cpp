#include<bits/stdc++.h>
using namespace std;

vector<int> nearestSmaller(int a[], int n)
{
    vector<int> ans;
    stack<int> s;

    for (int i = 0; i < n; i++)
    {
        if(s.empty())
            ans.push_back(-1);
        else if(!s.empty() && s.top() < a[i])
            ans.push_back(s.top());
        else if (!s.empty() && s.top() >= a[i])
        {
            while (!s.empty() && s.top() >= a[i])
            {
                s.pop();
            }
            
            if(s.empty())
                ans.push_back(-1);
            else if(s.top() < a[i])
                ans.push_back(s.top());
        }
        
        s.push(a[i]);
    }

    return ans;
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
    
    vector<int> ans=nearestSmaller(a, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}