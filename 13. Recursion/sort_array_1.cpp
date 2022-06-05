//https://www.geeksforgeeks.org/recursive-selection-sort/

#include<bits/stdc++.h>
using namespace std;

void sort(int A[], int size)
{
    static int i=0, j=0, min_index=j;

    if(j == size-1)
        return;

    if(i == size)
    {
        int temp=A[j];
        A[j]=A[min_index];
        A[min_index]=temp;

        j++;
        min_index=j;
        i=j;

        sort(A, size);
    }

    if(A[i] < A[min_index])      
        min_index=i;
       
    i++;
    sort(A, size);
}

int main()
{
    int A[]={2, 3, 7, 6, 4, 5, 9};

    sort(A, 7);

    for (int i = 0; i < 7; i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
}