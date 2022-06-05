#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int key, int start, int end)
{
    int mid;

    while(start < end)
    {
        mid=start+(end-start)/2;

        if(a[mid] > key)
            end=mid;
        else
            start=mid+1;
    }

    return end;
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int val=a[i];
        int j=i;

        int location=binarySearch(a, val, 0, j);

        while(j > location)
        {
            a[j]=a[j-1];
            j--;
        }

        a[j]=val;//a[location]=val;
    }
    

    return;
}

int main()
{
    int a[]={7,2,4,1,5,3};

    insertionSort(a, 6);

    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}