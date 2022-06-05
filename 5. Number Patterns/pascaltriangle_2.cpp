#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int coeff;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows-2-i; j++)    //for spaces
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)
        {
            if(j==0)
                coeff=1;
            else
                coeff = coeff * (i-j+1)/j;   // after 1st element of each row remaining can be derived from previous element

            cout<<coeff<<" ";
        }
        
        cout<<endl;
    }

    return 0;
    
}