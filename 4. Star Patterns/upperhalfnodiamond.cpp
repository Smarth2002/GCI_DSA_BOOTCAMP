#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int k=i;

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j>=rows+1-i && j<=rows-1+i)
            {
                cout<<k;
                (j<rows)?k++:k--;   //value is incremented/decremented only when printed upto middle val i.e upto no of rows
            }

            else
                cout<<" ";

        }

        cout<<endl;
        
    }

    return 0;
    
}