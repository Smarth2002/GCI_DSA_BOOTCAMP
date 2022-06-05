#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        char ch='A';

        for (int j = 1; j <= 2*rows; j++)
        {
            if(j >= rows+1-i && j <= rows+i)
            {
                if(j==rows+1) //same variable changed to 1 at starting of next half while keeping incrementing it continuously
                    ch='1';    

                cout<<ch;
                ch++;
            }
            else
                cout<<" ";
                       
        }

        cout<<endl;
        
    }

}