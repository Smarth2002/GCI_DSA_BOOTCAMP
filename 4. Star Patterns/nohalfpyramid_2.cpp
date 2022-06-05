#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int start_val=1;

    for (int i = 1; i <= rows; i++)
    {
        int val=start_val;  //to modify it in a particular row

        for (int j = 1; j <= i; j++)
        {
            cout<<val;
            val=val-(rows-i+j);      //(rows-i+j) i.e. value to be subtracted is constant so no need to make seperate variable for that    
        }

        start_val = start_val + (rows-i+1); /*starting value updated at last bcz we have initialised it with 1
                                            so we start it after completing first row */

        cout<<endl;        
    }

    return 0;
    
}