#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        char ch='A'+i-1;      

        for (int j = 1; j <= rows; j++)
        {
            if(j<=i)
            {
                cout<<ch;
                ch--;
            }
            else
                cout<<" ";
            
        }

        cout<<endl;
        
    }

    return 0;
    
}