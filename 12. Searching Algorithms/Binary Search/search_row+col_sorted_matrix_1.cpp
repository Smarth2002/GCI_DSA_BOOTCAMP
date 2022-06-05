/*
Search in a row wise and column wise sorted matrix

Given an n x n matrix and a number x, find the position of x in the matrix if it is present in it. 
Otherwise, print “Not Found”. In the given matrix, every row and column is sorted in increasing order. 
The designed algorithm should have linear time complexity. 

Example: 

Input: mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 29
Output: Found at (2, 1)
Explanation: Element at (2,1) is 29

Input : mat[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
              x = 100
Output : Element not found
Explanation: Element 100 is not found
*/

#include<bits/stdc++.h>
using namespace std;

void search_sortedMatrix(int A[][6], int size, int key)
{
/*
bound the entire matrix by row_start=0, row_end=size-1, col_start=0, col_end=size-1

now we can find the last col index by checking elements in 1st row
by finding the greatest element smaller than key in 1st row
bcz the key cant exist in that col whose 1st element > key (as col wise sorted matrix)
and if key is found in 1st row while finding last col then print it and return

now we can find the last row by checking elements in 1st col
by finding greatest element smaller than key in 1st col
bcz key cant exist in that row whose 1st element > key (row wise sorted array)
and if key is found while checking elements in 1st col then print it and return

so we checked 1st row to find last col and 1st col for last by finding greatest element < key and not found
the key itself then key is not present in 1st row and 1st col so we increment both row_start and col_start

and repeat the above procedure till whole matrix is checked (row_start <= row_end) && (col_start <= col_end)
*/

    int row_start=0, col_start=0;
    int row_end=size-1, col_end=size-1; //whole matrix is bounded

    int mid;

    while(row_start <= row_end && col_start <= col_end) //till a single element is left 
    {
        int start=col_start, end=col_end; //finding last col 

        while (start <= end) //finding last col by checking elements in 1st row (first element of each column)
        {
            mid=start+(end-start)/2;

            if(A[row_start][mid] == key)
            {
                cout<<row_start<<mid;
                return;
            }
            else if(A[row_start][mid] < key)
            {
                col_end=mid;
                start=mid+1;   
            }
            else
                end=mid-1;
        }
        
        start=row_start, end=row_end; //finding last row

        while (start <= end) //finding last row by checking elements of 1st col (1st element of each row)
        {
            mid=start+(end-start)/2;

            if(A[mid][col_start] == key)
            {
                cout<<mid<<col_start;
                return;
            }
            else if(A[mid][col_start] < key)
            {
                row_end=mid;
                start=mid+1;   
            }
            else
                end=mid-1;
        }
        
        row_start++; //so we not find key while finding last col (on checking 1st row) and last row (by checking 1st col)
        col_start++; //so key not present in 1st row and col so increment it
    }

    cout<<"not found";

    return;
}

int main()
{
    int size;
    cin>>size;

    int A[6][6];

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