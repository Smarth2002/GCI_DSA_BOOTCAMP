#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;


    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(j == 1 || j == rows || i == 1 || i == rows)
                cout<<"*";
            
            else if(i >= 3 && i <= rows-2 && j >= 3 && j <= rows-2)
            {
                if(i == 3 || i == rows-2 || j == 3 || j == rows-2)
                    cout<<"*";
                else
                    cout<<" ";    
               
            }

            else
                cout<<" ";
        }

        cout<<endl;
        
    }

    return 0;
    
}