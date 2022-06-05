/* Given a n*n matrix where all numbers are distinct, find the maximum length path 
(starting from any cell) such that all cells along the path are in increasing order with a difference of 1. 
We can move in 4 directions from a given cell (i, j), i.e., we can move to (i+1, j) or (i, j+1) or (i-1, j) 
or (i, j-1) with the condition that the adjacent cells have a difference of 1.
Example: 
 

Input:  mat[][] = {{1, 2, 9}
                   {5, 3, 8}
                   {4, 6, 7}}
Output: 4
The longest path is 6-7-8-9.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin>>row>>col;

    int array[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }

    int n, no=0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) //check the longest chain for each element and store biggest
        {
            int curr_i=i, curr_j=j; //so that we can move to consecutive elements and modify i and j..so made a copy
            n=1; //chain start from 1 for every element as we start comparing other elements instead of starting one
            
            int flag=1;

            while( flag  )
            {
                if( (array[curr_i][curr_j+1] == array[curr_i][curr_j] +1) && ( curr_j+1 < col) ) //check right
                {
                    curr_j++; //take current i and j to this element
                    n++; //increase chain
                }

                else if( (array[curr_i+1][curr_j] == array[curr_i][curr_j] + 1) && ( curr_i+1 < row ) ) //down
                {
                    curr_i++;
                    n++;
                }

                else if( (array[curr_i-1][curr_j] == array[curr_i][curr_j] +1) && ( curr_i-1 >= 0 ) ) //up
                {
                    curr_i--;
                    n++;
                }

                else if( (array[curr_i][curr_j-1] == array[curr_i][curr_j] +1) && ( curr_j-1 >= 0 ) ) //left
                {
                    curr_j--;
                    n++;
                }

                else //if no consecutive element found in any direction
                {
                    flag=0; //to come out of while loop and change the starting element

                    if( n > no ) //transer to no containing biggest chain
                        no=n;
                }
            }
            
        }
    }
    
    cout<<no;

    return 0;
}