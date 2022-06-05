#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int j=1;
        int flag=1;

        label:    // this block is repeated till (2*rows-1) times 
            if( j >= rows+1-i && j <= rows-1+i )
            {
                if(flag)
                    cout<<"*";
                else
                    cout<<" ";
                
                flag=1-flag; //toggling flag between 0 and 1
            }
            else
                cout<<" ";
            
            j++;    //increase column no
            
            if(j<=2*rows-1)
                goto label;   //repeat till column no reaches (2*rows-1)
            else
                cout<<endl;   //after printing all columns change the line
 
    }

    return 0;
    
}