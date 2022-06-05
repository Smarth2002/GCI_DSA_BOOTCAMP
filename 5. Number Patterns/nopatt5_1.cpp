#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int no=rows+1-i;

        for (int j = 1; j <= rows; j++)
        {
            if(j<=rows+1-i)
            {
                cout<<no;
                no--;
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}