//https://www.geeksforgeeks.org/recursive-programs-to-find-minimum-and-maximum-elements-of-array/

#include<bits/stdc++.h>
using namespace std;

int maxEle(int A[], int n)
{
    static int max=A[0], i=0;

    if(i == n)
        return max;
    
    if(A[i] > max)
        max=A[i];
    
    i++;

    return maxEle(A, n);
}

int maxEle1(int a[], int n)
{
    if(n == 1)
        return a[n-1];

    int ele=maxEle(a, n-1);

    if(a[n-1] > ele)
        return a[n-1];
    else
        return ele;
}

int main()
{
    int A[5]={0, 1, 19, 3 ,4};

    cout<<maxEle1(A, 5);

    return 0;
}