//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/easy-sum-set-problem-7e6841ca/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sizeA;
    cin>>sizeA;
    int A[sizeA];

    for (int i = 0; i < sizeA; i++)
    {
        cin>>A[i];
    }
    
    int sizeC;
    cin>>sizeC;
    int C[sizeC];

    for (int i = 0; i < sizeC; i++)
    {
        cin>>C[i];
    }

/*
sum of every element of A with every element of B must exist in C
so we find lower range of element in B by C[0]-A[0] as smallest element of A + smallest of B should be 1st element of C
and similarly upper range as sum of largest of both in A and B must be = to last of C

so we check all elements in this range and find if their summation with each element is A exist in C
then it can exist in B otherwise not .
*/

    sort(A, A+sizeA);

    int start=C[0]-A[0];
    int end=C[sizeC-1]-A[sizeA-1];

    int i, j;

    for (i = start; i <= end; i++)
    {
        for (j = 0; j < sizeA; j++)
        {
            if(find(C, C+sizeC, A[j]+i) == C+sizeC) //if even 1 of the sum of element of A with i not exist in C then i cant exist in B
                break;
        }

        if(j == sizeA)
            cout<<i<<" ";
    }
    
    return 0;
}