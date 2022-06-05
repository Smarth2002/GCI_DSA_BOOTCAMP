#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int k=1;

    for (int i = 1; i <= rows; i++)
    {
        if(i<=k)
            cout<<"*";
        
        if( i == k && k < rows )
        {
            cout<<endl;
            i=0;
            k++;
        }       
    }
    


    return 0;
}