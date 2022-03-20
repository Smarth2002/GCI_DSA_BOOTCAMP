#include<bits/stdc++.h>
using namespace std;

#define MAX 100

vector<int> NSL(vector<int> height)
{
    vector<int> nsl;
    stack<pair<int, int>> s;

    for (int i = 0; i < height.size(); i++)
    {
        if(s.empty())
            nsl.push_back(-1);
        else if(!s.empty() && s.top().first < height[i])
            nsl.push_back(s.top().second);
        
        else if(!s.empty() && s.top().first >= height[i])
        {
            while (!s.empty() && s.top().first >= height[i])
            {
                s.pop();
            }
            
            if(s.empty())
                nsl.push_back(-1);
            else if(s.top().first < height[i])
                nsl.push_back(s.top().second);
        }

        s.push({height[i], i});
    }
    
    return nsl;
}

vector<int> NSR(vector<int> height)
{
    vector<int> nsr;
    stack<pair<int, int>> s;

    for (int i = height.size()-1; i >= 0; i--)
    {
        if(s.empty())
            nsr.push_back(height.size());
        else if(!s.empty() && s.top().first < height[i])
            nsr.push_back(s.top().second);
        
        else if(!s.empty() && s.top().first >= height[i])
        {
            while (!s.empty() && s.top().first >= height[i])
            {
                s.pop();
            }
            
            if(s.empty())
                nsr.push_back(height.size());
            else if(s.top().first < height[i])
                nsr.push_back(s.top().second);
        }

        s.push({height[i], i});
    }
    
    reverse(nsr.begin(), nsr.end());
    return nsr;
}

int MAH(vector<int> height)
{
    vector<int> nsr=NSR(height);
    vector<int> nsl=NSL(height);

    int width, area=INT_MIN;

    for (int i = 0; i < height.size(); i++)
    {
        width=nsr[i]-nsl[i]-1;

        if( (height[i] * width) > area )
            area=height[i] * width;
    }
    
    return area;
}

int maxArea(vector<vector<int>> mat, int n, int m)
{
    vector<int> height(m, 0);
    int ans=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(mat[i][j] == 0)
                height[j]=0;
            else
                height[j]+=mat[i][j];
        }      

        ans=max(ans, MAH(height));
    }
    
    return ans;
}

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> mat(n, vector<int> (m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
        
    }
    

    cout<<maxArea(mat, n, m);

    return 0;
}