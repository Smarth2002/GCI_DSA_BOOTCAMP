#include<bits/stdc++.h>
using namespace std;

vector<int> maxLeft(int a[], int n)
{
    vector<int> maxL;
    int max=-1;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > max)  
            max=a[i];
        maxL.push_back(max);
    }
    
    return maxL;
}

vector<int> maxRight(int a[], int n)
{
    vector<int> maxR;
    int max=-1;

    for (int i = n - 1; i >= 0; i--)
    {
        if(a[i] > max)
            max=a[i];
        maxR.push_back(max);
    }
    
    reverse(maxR.begin(), maxR.end());
    return maxR;
}

int RainWater(int ht[], int n)
{
    vector<int> maxL=maxLeft(ht, n);
    vector<int> maxR=maxRight(ht, n);

    int ht_water, ans=0;

    for (int i = 0; i < n; i++)
    {
        ht_water=min(maxL[i], maxR[i]);
        ans+=(ht_water-ht[i]);
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
    
    cout<<RainWater(a, n);
    return 0;
}