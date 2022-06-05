//https://practice.geeksforgeeks.org/problems/gf-series3535/1/?category[]=Recursion&category[]=Recursion&difficulty[]=-1&page=1&query=category[]Recursiondifficulty[]-1page1category[]Recursion

#include<bits/stdc++.h>
using namespace std;

void solve(int ans[], int N)
    {
        if(N == 1)
        {
            ans[0]=0;
            cout<<0<<" ";
            return;
        }
        if(N == 2)
        {
            ans[1]=1;
            solve(ans, N-1);
            cout<<1<<" ";
            return;
        }
        
        solve(ans, N-1);
        ans[N-1] = ans[N-3]*ans[N-3] - ans[N-2];
        cout<<ans[N-1]<<" ";
        
        return;
    }

    void gfSeries(int N)
    {
        int ans[N];
        
        solve(ans, N);


        return;
    }

    int main()
    {
        int N=6;

        gfSeries(15);

        return 0;
    }