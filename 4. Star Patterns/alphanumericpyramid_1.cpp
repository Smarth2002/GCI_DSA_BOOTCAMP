#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        char alpha='A';         //in each line alphabets and numbers start from 1 
        int num=1;

        for (int j = 1; j <= 2*rows; j++)
        {
            if(j >= rows+1-i && j <= rows+i)
            {
                if(j <= rows)       //till first half alphabets 
                {
                    cout<<alpha;
                    alpha++;
                }
                else                //next half numbers
                {
                    cout<<num;
                    num++;
                }
                
            }
            else
                cout<<" ";
            
        }
        
        cout<<endl;
    }

    return 0;
    
}