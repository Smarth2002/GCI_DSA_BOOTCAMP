/*
SEARCH IN A ROW WISE AND COLUMN WISE SORTED MATRIX:

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. 
Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. 
The designed algorithm should have linear time complexity.
Example :

Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 29
Output : Found at (2, 1)
*/

#include<bits/stdc++.h>
using namespace std;

void search_sortedMatrix(int A[][4], int size, int key)
{
/*
we start from top right of matrix and compare key with that element 
now we have 2 directions down (with greater elements) and left (with smaller elements)
we compare it with key and move either down or left
and again check with key till the key is found or we not go out of bounds

(on each comparison we are either eliminating a row or a col and never come back to that row or col
we are either moving down or left each time and traversing a shortest path to the key)
*/

    int i=0, j=size-1;

    while(i >= 0 && i <= size-1 && j >= 0 && j <= size-1)
    {
        if(A[i][j] == key)
        {
            cout<<i<<" "<<j;
            return;
        }
        else if(A[i][j] < key)
            i++;
        else 
            j--;
    }
    
    cout<<"not found";
    return;
}

int main()
{
    int size;
    cin>>size;

    int A[4][4];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>A[i][j];
        }
    }
    
    int key;
    cin>>key;

    search_sortedMatrix(A, size, key);

    return 0;
}