#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    char ch;
    bool flag;

    for (int i = 1; i <= rows; i++)
    {
        if(i%2==0)     //for EVEN rows starts with A
            ch='A';
        else           // odd row starts with 1
            ch='1';

        flag=1; 

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if( j >= rows+1-i && j <= i+rows-1 )
            {
                if(flag)
                {
                    cout<<ch;
                    ch++;                    
                }
                else
                    cout<<" ";

                flag=1-flag;           //after every element (character or space) flag toggles betweem 0 and 1   
            }

            else
                cout<<" ";           
        }

        cout<<endl;
        
    }

    return 0;
    
}