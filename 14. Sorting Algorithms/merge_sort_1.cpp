#include<bits/stdc++.h>
using namespace std;

void merge(int left[], int sizeL, int right[], int sizeR, int a[])
{
    int i=0, j=0, k=0;

    while (i < sizeL || j < sizeR)
    {
        if(i < sizeL && j < sizeR)
        {
            if(left[i] <= right[j])
            {
                a[k]=left[i];
                i++;
            }
            else
            {
                a[k]=right[j];
                j++;
            }
        }
        else if(i < sizeL)
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }

        k++;
    }
    
    return;
}

void mergeSort(int a[], int n)
{
    if(n == 1)
        return;
    
    int mid=n/2;

    int left[mid];
    int right[n-mid];

    for (int i = 0; i < mid; i++)
    {
        left[i]=a[i];
    }
    for (int i = mid; i < n; i++)
    {
        right[i-mid]=a[i];
    }
    
    mergeSort(left, mid);
    mergeSort(right, n-mid);
    
    merge(left, mid, right, n-mid, a);

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

    mergeSort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}