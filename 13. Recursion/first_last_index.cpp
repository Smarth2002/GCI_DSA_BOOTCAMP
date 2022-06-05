//https://www.geeksforgeeks.org/how-to-find-last-index-of-a-number-in-an-array-in-c/

#include<bits/stdc++.h>
using namespace std;

int lastIdx(int A[], int idx, int x)
{
    if(idx == 0)
        return -1;

    if(A[idx-1] == x)
        return idx-1;

    return lastIdx(A, idx-1, x);
}

int firstIdx(int A[], int size, int x)
{
    if(size == 0)
        return -1;

    if(A[0] == x)
        return 0;
    
    int ans=firstIdx(A+1, size-1, x);

    if(ans == -1)
        return -1;
    else
        return ans+1;
}

int main()
{
    int a[]={2,3,6,9,8,3,2,3,6,4};

    cout<<firstIdx(a, 10, 90);

    return 0;
}