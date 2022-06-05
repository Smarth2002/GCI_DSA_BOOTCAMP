#include<bits/stdc++.h>
using namespace std;

void bubbleSort_rec(int a[], int n, int i, int j)
{
    if(i == n-1)
        return;

    if(j == n-i-1)
    {
        j=0;        
        
        bubbleSort_rec(a, n, i+1, j);

        return;
    }

    if(a[j] > a[j+1])
    {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }

    bubbleSort_rec(a, n, i, j+1);
}

int main()
{
    int a[]={2,7,4,1,5,3};

    bubbleSort_rec(a, 6, 0, 0);

    for (int i = 0; i < 6; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}