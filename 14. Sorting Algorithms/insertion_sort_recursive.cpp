#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)
{
    if(n == 1)
        return;

    insertionSort(a, n-1);

    int val=a[n-1];
    int j=n-1;

    while (j > 0 && a[j-1] > val)
    {
        a[j]=a[j-1];
        j--;
    }
    
    a[j]=val;

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