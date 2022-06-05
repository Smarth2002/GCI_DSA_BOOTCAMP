#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int fac_i=1,fac_j=1,fac_ij=1;

    for (int i = 0; i < rows; i++)
    {       
        for (int j = 0; j <= rows-2-i; j++)     //for spaces
        {
            cout<<" ";
        }

        for (int j = 0; j <= i; j++)    //for elements bcz j has to be again started from beginning after spaces so made another loop
        {
            for (int counter = 1; counter <= i; counter++)
            {
                fac_i*=counter;
            }
            for (int counter = 1; counter <= i-j; counter++)
            {
                fac_ij*=counter;
            }
            for (int counter = 1; counter <= j; counter++)
            {
                fac_j*=counter;
            }
            
            cout<< fac_i / (fac_ij*fac_j) <<" ";  //every element is iCj (binomial coefficient)

            fac_i=1;
            fac_j=1;
            fac_ij=1;
            
        }

        cout<<endl;                
    }

   return 0;
    
}