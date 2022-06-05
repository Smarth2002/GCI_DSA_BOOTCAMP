//https://www.geeksforgeeks.org/find-first-repeating-element-array-integers/

#include<bits/stdc++.h>
using namespace std;

const int MAX=100005;
int occurence[MAX];

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < MAX; i++)
    {
        occurence[i]=-1;
    }   

    int min_idx=n;

    for (int i = 0; i < n; i++)
    {
        if(occurence[a[i]] == -1)
            occurence[a[i]]=i;
        else
        {
            if(occurence[a[i]] < min_idx)
                min_idx=occurence[a[i]];
        }
    }
    if(min_idx != n)
        cout<<min_idx+1;
    else
        cout<<"-1";

    return 0;
}