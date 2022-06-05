//https://www.geeksforgeeks.org/counting-inversions/

#include<bits/stdc++.h>
using namespace std;

int merge(int a[], int left, int mid, int right)
{
    int temp[right-left+1];
    int i=left, j=mid+1, k=0;
    int inv=0;

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

            inv=inv+mid-i+1;
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
    
    return inv;
}

int inversion(int a[], int left, int right)
{

    if(left < right)
    {
        int mid=left+(right-left)/2;

        int invL=inversion(a, left, mid);
        int invR=inversion(a, mid+1, right);
        int invM=merge(a, left, mid, right);

        return invL+invR+invM;
    }

    return 0;
}

int main()
{
    int a[]={3, 1, 2};

    int ans=inversion(a, 0, 2);
    cout<<ans;

    return 0;
}