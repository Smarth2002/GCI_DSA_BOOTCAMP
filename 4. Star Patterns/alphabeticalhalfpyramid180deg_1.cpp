#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int starting_val=64;      //ascii value before A

    for (int i = 1; i <= rows; i++)
    {
        starting_val+=i;
        int val=starting_val;      //starting val is put in new variable to perform incrementation/decrementation

        for (int j = 1; j <= rows; j++)
        {
            if(j>=rows+1-i)
            {
                cout<<(char) val;
                val--;
            }
            else
                cout<<" ";
            
        }

        cout<<endl;
        
    }

    return 0;
    
}