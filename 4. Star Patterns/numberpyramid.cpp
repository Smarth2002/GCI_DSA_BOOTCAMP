#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int no=i;

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if( j >= rows+1-i && j <= rows-1+i )
            {
                cout<<no;
                (j<rows)?no--:no++;
            }
            else
                cout<<" ";

        }

        cout<<endl;
        
    }

    return 0;
    
}