#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int start, int end)
{
    int pivot=end;
    int pIdx=start;

    for (int i = start; i < end; i++)
    {
        if(a[i] <= a[pivot])
        {
            int temp=a[pIdx];
            a[pIdx]=a[i];
            a[i]=temp;

            pIdx++;
        }
    }
    
    int temp=a[pIdx];
    a[pIdx]=a[end];
    a[end]=temp;

    return pIdx;
}

int randomized_partition(int a[], int start, int end)
{
    int pivot=( rand() % (end-start+1) ) + start;

    int temp=a[pivot];
    a[pivot]=a[end];
    a[end]=temp;

    int pivotIdx= partition(a, start, end);

    return pivotIdx;
}

void quickSort(int a[], int start, int end)
{
    if(start >= end)
        return;

    int pivot=randomized_partition(a, start, end);

    quickSort(a, start, pivot-1);
    quickSort(a, pivot+1, end);

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

    quickSort(a, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}