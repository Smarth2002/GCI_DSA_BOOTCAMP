#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int no;

    for (int i = 1; i <= rows; i++)
    {
        no=2*i-1;

        for (int j = 1; j <= rows; j++)
        {
            if(j<=rows+1-i)
            {
                cout<<" "<<no;
                no+=2;
            }
            else
                cout<<" ";
        }
        
        cout<<endl;
    }

    return 0;
    
}