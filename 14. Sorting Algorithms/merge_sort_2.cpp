#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int start, int mid, int end)
{
    int temp[end-start+1];

    int i=start, j=mid+1, k=0;

    while (i <= mid && j <= end)
    {
        if(a[i] < a[j])
        {
            temp[k]=a[i];
            i++;
        }
        else
        {
            temp[k]=a[j];
            j++;
        }

        k++;
    }
        
    while (i <= mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while (j <= end)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    
    for (int i = start; i <= end; i++)
    {
        a[i]=temp[i-start];
    }
    
    return;
}

void mergeSort(int a[], int start, int end)
{
    if(start == end)
        return;
    
    int mid=start+(end-start)/2;

    mergeSort(a, start, mid);
    mergeSort(a, mid+1, end);

    merge(a, start, mid, end);

    return;
}

int main()
{
    int a[]={2,4,1,6,8,5,3};

    mergeSort(a, 0, 6);

    for (int i = 0; i < 7; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}