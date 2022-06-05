#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int coeff;

    for (int i = 0; i < rows; i++)
    {
        coeff=1;     //every row starts with 1

        for (int j = 0; j <= rows-2-i; j++)  //for spaces
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout<<coeff<<" ";

            coeff = coeff * (i-j)/(j+1); /*after printing element next element is derived from i and j of current element
                                           but in formula new=prev*(i-j+1)/j i and j were of current new element but
                                           here we are finding next element with same i and j so we modify the formula
                                           for current values and put i(old)+1 and j(old)+1 in place of i and j*/
        }
        
        cout<<endl;
    }

    return 0;
    
}