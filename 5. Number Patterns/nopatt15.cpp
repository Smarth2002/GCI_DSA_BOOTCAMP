#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int no=rows;

    for (int i = 1; i <= rows; i++)
    {
        no=rows+1-i;

        for (int j = 1; j <= rows; j++)
        {
            cout<<no;
            if(j<i)    //(no<rows) can also be used
                no++;         
        }
        
        cout<<endl;
        
    }

    return 0;
    
}