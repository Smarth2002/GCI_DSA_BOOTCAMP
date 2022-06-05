#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        bool val=1;      //starting element of each row=1

        for (int j = 1; j<= rows; j++)
        {
            if(j <= i)
            {
                cout<<val;

                val=1-val;          //toggling between 0 and 1
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}