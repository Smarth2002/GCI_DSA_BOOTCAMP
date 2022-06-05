//https://www.geeksforgeeks.org/recursive-program-to-find-all-indices-of-a-number/

#include<bits/stdc++.h>
using namespace std;

void allIdx1(int a[], int n, int x)
{
    if(n == 0)
        return;

    allIdx1(a, n-1, x);

    if(a[n-1] == x)
        cout<<n-1<<endl;
}

int allIdx(int a[], int n, int x, int ans[])
{
    if(n == 0)
        return 0;

    int size=allIdx(a+1, n-1, x, ans);

    if(a[0] == x)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            ans[i+1]=ans[i]+1;
        }
        
        ans[0]=0;
        size++;
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            ans[i]+=1;
        }
    }
    
    return size;
}

void printIdx(int a[], int n, int x)
{
    int ans[n];
    int size=allIdx(a, n, x, ans);

    for (int i = 0; i < size; i++)
    {
        cout<<ans[i]<<" ";
    }
    
    return;
}

int main()
{
    int a[]={1,2,3,2,2,5};

    printIdx(a, 6, 2);

    return 0;
}