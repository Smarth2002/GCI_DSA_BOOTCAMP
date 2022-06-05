#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int j=1;
    int flag=1;

    for (int i = 1; i <= rows; )
    {
        if(j<=2*rows-1)
        {
            if( j >= rows+1-i && j <= rows-1+i )
            {
                if(flag)
                    cout<<"*";
                else
                    cout<<" ";
                
                flag=1-flag;               
            }
            else
                cout<<" ";
            
            j++;
            continue;  //iterating above block (2*rows-1) times keeping i fixed
        }
//after printing 2*rows-1 columns row changes(i increases),flag=1,and column starts from 1

        cout<<endl;
        i++;
        flag=1;
        j=1;
    }

    return 0;
    
}