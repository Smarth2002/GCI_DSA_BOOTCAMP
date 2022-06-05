#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int val=64;

    for (int i = 1; i <= rows; i++)
    {
        val = val + 2*(i-1) +1; //because at last element of each row val decreases further which is not needed as val of last element is needed


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