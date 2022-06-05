#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;
    
    int sum=0;
    int val;

    for (int i = 1; i <= rows; i++)
    {
        sum+=i;    //every row either has starting value from sum or end at sum

        if(i%2==0)
            val=sum;    //val is made bcz sum is const and cant be modified (incremented/decremented)
        else
            val=sum-i+1;
        
        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j<=2*i-1)
            {
                if(j%2==0)
                    cout<<"*";
                else
                {    
                    cout<<val;

                    (i%2==0)?val--:val++;    //increase at odd rows and decrease at even rows        
                }
                                          
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
    