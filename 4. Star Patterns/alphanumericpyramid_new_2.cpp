#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    for (int i = 1; i <= rows; i++)
    {
        int val=49;        //we give ASCII values to variable and print it in character form as char contains all digits, alphabets, symbols...

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j >= rows+1-i && j <= rows-1+i)
            {
                cout<<(char) val;              //printing character corresponding to ASCII value
                val++;

                if(j==rows)      //changed to ASCII value of A after middle row
                    val=65;
            }
            else
            {
                cout<<" ";
            }
            

        }
        cout<<endl;
        
    }

    return 0;
}
    