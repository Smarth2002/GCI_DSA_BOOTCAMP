//https://www.geeksforgeeks.org/c-program-for-binary-search-recursive-and-iterative/

#include<bits/stdc++.h>
using namespace std; 

int binarySearch(int A[], int size, int key)
{
    static int start=0, end=size-1;
    int mid=start+(end-start)/2;

    if(start > end)
        return 0;

    if(A[mid] == key)
        return 1;
    else if(A[mid] > key)
        end=mid-1;
    else
        start=mid+1;

    return binarySearch(A, size, key);
}

int main()
{
    int A[5]={5, 10, 15, 25, 30};
    int key=25;

    cout<<binarySearch(A, 5, key);

    return 0;
}