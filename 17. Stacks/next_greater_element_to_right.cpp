#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreater(int a[], int n)
{
    vector<int> ans;
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if(s.empty())
            ans.push_back(-1);
        else
        {
            if(s.top() > a[i])
                ans.push_back(s.top());
            else
            {
                while (!s.empty() && s.top() <= a[i])
                {
                    s.pop();
                }
                
                if(s.empty())
                    ans.push_back(-1);
                else if(s.top() > a[i])
                    ans.push_back(s.top());
            }         
        }

        s.push(a[i]);
    }
    
    reverse(ans.begin(), ans.end());
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
    
    vector<int> ans=nextGreater(a, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}