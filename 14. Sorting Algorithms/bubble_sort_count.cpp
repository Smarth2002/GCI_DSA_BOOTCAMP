//https://www.hackerearth.com/problem/algorithm/bubble-sort-15-8064c987/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n]={};

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    bool flag;
    int count=0;
    for (int j = 1; j <= n; j++)
    {
        flag=0;
        count++;
        for (int i = 0; i < n-1; i++)
        {
            if(a[i] > a[i+1])
            {
                int temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;

                flag=1;
            }
        }
        
        if(!flag)
            break;
    }
    
    cout<<count<<endl;

    return 0;
}