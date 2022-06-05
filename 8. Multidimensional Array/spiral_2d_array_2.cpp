#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout<<"enter rows and columns: ";
    cin>>row>>col;

    int array[row][col];

    cout<<"enter elements of array"<<endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>array[i][j];
        }
    }

    int top=0, bottom=row-1, left=0, right=col-1; 
    int dir=0;

/* print in 1 out of 4 directions (0=right, 1=down, 2=left, 3=up) at a time and mark the boundaries of starting
and ending of each row and col of array left to be traversed and edit them after printing in each direction
so that we donot come at it again
top= top row, bottom= lower most row
right=right most col and left=left most col 

top and bottom come towards each other after printing rows 
left and right come closer on printing columns*/

    while ( top <= bottom && left <= right ) //if anyone of the 2 pairs (top,bottom)(left,right) cross each other than we stop printing
    {
        if ( dir == 0 ) //right
        {
            for (int i = left; i <= right; i++)
                cout<<array[top][i]<<", ";
            
            top++;    //so that we not come to this row again so increase topmost row
        }

        else if ( dir == 1 ) //down
        {
            for (int i = top; i <= bottom; i++)
                cout<<array[i][right]<<", ";
            
            right--;    //decrease rightmost col
        }
        
        else if ( dir == 2 )  //left
        {
            for (int i = right; i >= left; i--)
                cout<<array[bottom][i]<<", ";
            
            bottom--;    //decrease bottommost row
        }

        else if ( dir == 3 )  //up
        {
            for (int i = bottom; i >= top; i--)
                cout<<array[i][left]<<", ";
            
            left++;    //increase leftmost col
        }

        dir = (dir+1)%4; //changes 0 to 1, 1 to 2, 2 to 3 and 3 to 0
    }
    
    return 0;
}