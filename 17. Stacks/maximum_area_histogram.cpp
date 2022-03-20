#include<bits/stdc++.h>
using namespace std;

vector<int> NSL(int a[], int n)
{
    vector<int> nsl;
    stack<pair<int, int>> s;

    for (int i = 0; i < n; i++)
    {
        if(s.empty())
            nsl.push_back(-1);
        else if(!s.empty() && s.top().first < a[i])
            nsl.push_back(s.top().second);
        
        else if(!s.empty() && s.top().first >= a[i])
        {
            while (!s.empty() && s.top().first >= a[i])
            {
                s.pop();
            }
            
            if(s.empty())
                nsl.push_back(-1);
            else if(s.top().first < a[i])
                nsl.push_back(s.top().second);
        }

        s.push({a[i], i});
    }
    
    return nsl;
}

vector<int> NSR(int a[], int n)
{
    vector<int> nsr;
    stack<pair<int, int>> s;

    for (int i = n - 1; i >= 0; i--)
    {
        if(s.empty())
            nsr.push_back(n);
        else if(!s.empty() && s.top().first < a[i])
            nsr.push_back(s.top().second);

        else if(!s.empty() && s.top().first >= a[i])
        {
            while (!s.empty() && s.top().first >= a[i])
            {
                s.pop();
            }
            
            if(s.empty())
                nsr.push_back(n);
            else if(s.top().first < a[i])
                nsr.push_back(s.top().second);
        }

        s.push({a[i], i});
    }
    
    reverse(nsr.begin(), nsr.end());
    return nsr;
}

int maxArea_histogram(int a[], int n)
{
    vector<int> nsl=NSL(a, n);
    vector<int> nsr=NSR(a, n);
/*
    for (int i = 0; i < nsl.size(); i++)
    {
        cout<<nsl[i]<<" ";
    }
    
    cout<<endl;

    for (int i = 0; i < nsr.size(); i++)
    {
        cout<<nsr[i]<<" ";
    }
    
    cout<<endl;
*/
    int maxArea=INT_MIN;
    int width;

    for (int i = 0; i < n; i++)
    {
        width=nsr[i]-nsl[i]-1;
        
        if( (a[i] * width) > maxArea )
            maxArea=a[i]*width;
    }
    
    return maxArea;
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
    
    cout<<maxArea_histogram(a, n);

    return 0;
}