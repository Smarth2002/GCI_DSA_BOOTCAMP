#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int n=(rows+1)/2;             //middle row and middle column
    int k=0;                      //used as i

    for (int i = 1; i <= rows; i++)
    {
        (i<=n)?k++:k--;           //k increases upto middle row then decreases as conditions satisfy in reverse order of upper half

        int val=k-1;              //every row starts with this val

        for (int j = 1; j <= rows; j++)
        {
            if( j >= n+1-k && j <= n-1+k )
            {
                cout<<val%10;

                (j<n)?val++:val--;
            }

            else
                cout<<" ";            
        }

        cout<<endl;
        
    }

    return 0;
    
}