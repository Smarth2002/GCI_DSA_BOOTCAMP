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

        if(val>=10)
            val%=10;              //because if there are many rows then k>10 and (k-1)>=10 so we print 0 at place of 10 and and last digits of nos>10

        for (int j = 1; j <= rows; j++)
        {
            if( j >= n+1-k && j <= n-1+k )
            {
                cout<<val;
               
                if(j<n) //val increases till middle column but at 9 it not increase and become 0 and again start increasing afterwards
                {
                    if(val==9)
                        val=0;
                    else
                        val++;
                }
                else //val decreases from middle column but on reaching 0 it not decrease and changes to 9 and again afterwards start decreasing
                {
                    if(val==0)
                        val=9;
                    else
                        val--;
                }
                                
            }

            else
                cout<<" ";            
        }

        cout<<endl;
        
    }

    return 0;
    
}