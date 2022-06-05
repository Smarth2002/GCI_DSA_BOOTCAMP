#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int val=a[i];
        int j;
        for (j = i; j > 0 && a[j-1] > val; j--)
        {       
            a[j]=a[j-1];            
        }
        
        a[j]=val;
    }
    
    return;
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

    insertionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}