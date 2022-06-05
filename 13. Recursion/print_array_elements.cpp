//https://www.geeksforgeeks.org/c-program-to-print-an-array-using-recursion/

#include<bits/stdc++.h>
using namespace std;

void print(int* A, int n)
{
    if(n == 1)
    {
        cout<<A[0]<<" ";
        return;
    }

    print(A, n-1);
    cout<<A[n-1]<<" ";

    return;
}

int main()
{
    int A[5]={5, 10, 15, 20, 25};

    print(A, 5);

    return 0;
}