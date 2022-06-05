#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int val;

    for (int i = 1; i <= rows; i++)
    {
        if(i%2==0)
            val=0;
        else
            val=1;

        for (int j = 1; j <= rows; j++)
        {
            if(j<=i)
            {
                cout<<val;
                val=1-val;
            }
            else
                cout<<" ";
        }

        cout<<endl;
        
    }


    return 0;
}
    