#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int n=(rows+1)/2;        //n is the last column and middle row
    int k=0;                 //used in place of i (reqd val of i)

    for (int i = 1; i <= rows; i++)
    {
        if(rows%2==0)         //for even rows middle row repeats
        {
            if(i<=n)
                k++;
            else if(i>n+1)    //for middle row n and n+1 same k bcz middle row repeats in even rows
                k--;
        }
        else
        {
            (i<=n)?k++:k--;     //no row repeats in odd rows
        }
        

        int val=1;    // this no is printed

        for (int j = 1; j <= n; j++)
        {
            if(j>=n+1-k)
            {
                cout<<val;
                val++;
            }
            
        }

        cout<<endl;
        
    }

    return 0;
    
}