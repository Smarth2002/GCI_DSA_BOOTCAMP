#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int k=0;
    int flag=1;

    for (int i = 1; i <= 2*rows-1; i++)
    {
        if(i<rows-k)
            cout<<" ";
        else
        {
            if(flag)
                cout<<"*";
            else
                cout<<" ";

            flag=1-flag;
        }

/*if i will iterate till end i.e. 2*rows-1 than it will come out and next row wil not be printed 
therefore we iterate till (rows+k) i.e. till last star in each row*/

        if( i == rows+k && k < rows-1 ) //if i == 2*rows-1 i.e. last column then terminate the loop ...can also be used as an alternative
        {
            cout<<endl;    //all things initialised on entering new row at the element (rows+k)
            k++;     //k increases in every row
            i=0;    //i again start from 0 as after this loop body it increments to 1 and again iterate till 2*rows-1
            flag=1-flag; 
        }
       
    }

    return 0;
    
}