#include<bits/stdc++.h>
using namespace std;

int min(int x, int y)
{
    return (x < y) ? x : y;
}

void merge(int a[], int left, int mid, int right)
{
    int temp[right-left+1];

    int i=left, j=mid+1, k=0;

    while (i <= mid && j <= right)
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
    while (j <= right)
    {
        temp[k]=a[j];
        j++;
        k++;
    }
    
    for (int i = left; i <= right; i++)
    {
        a[i]=temp[i-left];
    }
    
    return;
}

void mergeSort(int a[], int n)
{
    for (int sub_size = 1; sub_size <= n-1; sub_size*=2)
    {
        for (int left = 0; left < n; left+=2*sub_size)
        {
            int mid=min(left+sub_size-1, n-1); //if mid exceed size then keep it n-1...if we keep it left then it will be always left and merging will be incorrect as subarray to right of mid will be unsorted
            int right=min(left+(2*sub_size)-1, n-1);

            merge(a, left, mid, right);
        }
        
    }
    
    return;
}

int main()
{
    int a[]={12,11,13,5,6,7,1,0};

    mergeSort(a, 8);

    for (int i = 0; i < 8; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}