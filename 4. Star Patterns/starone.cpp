#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int rows=3*n;
    int columns=2*n-1;
    int k=0;

    for (int i = 1; i <= rows; i++)
    {       
        for (int j = 1; j <= columns; j++)
        {
            if(i<=n)      //1st block
            {
                if(j>=2*n-i)
                    cout<<"*";
                else
                    cout<<" ";
            }
            else if(i<=2*n) //2nd block
            {
                if( j >= i || j <= i-n-1 )
                    cout<<"*";
                else if(j==n)
                    cout<<"1";
                else
                    cout<<" ";
            }
            else          //3rd block
            {
                if( j <= rows+1-i )
                    cout<<"*";
                else
                    cout<<" ";
            }            
        }

        cout<<endl;
        
    }

    return 0;
    
}