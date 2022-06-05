#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int no;

    for (int i = 1; i <= rows; i++)
    {
        if(i%2==0)
            no=rows-i+1;        /* no=no-2 can also be used ..ideally it should be no=no-1 but at last column 
                                   of odd row no is further incremented so we subtract it again so -2*/
        else
            no=1;

        for (int j = 1; j <= rows; j++)
        {
            if(j<=rows+1-i)
            {
                cout<<no;
                
                (i%2==0)?no--:no++;
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}