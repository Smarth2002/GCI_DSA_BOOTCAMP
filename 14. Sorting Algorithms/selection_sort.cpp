#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min=a[i], min_idx=i;

        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[min_idx])           
                min_idx=j;
            
        }
        
        int temp=a[i];
        a[i]=a[min_idx];
        a[min_idx]=temp;
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
    

    selectionSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}