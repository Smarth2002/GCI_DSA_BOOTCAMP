#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int start_val=0;

    for (int i = 1; i <= rows; i++)
    {
        if(i%2==0)
        {
            start_val--;  //bcz at last element of odd row it increments more than no itself so we decrement it one time in every even row
            start_val=start_val+i;    //at even row starting val increases by i
        }
        else        
        start_val=start_val+1;         //at odd rows starting val increases by 1
            
        int val=start_val; //val is made bcz we cant change start val it needs to be constant and val can be incremented/decremented

        int flag=1;            //at starting of each row no is printed

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j<=2*i-1)
            {
                if(flag)    //no is printed
                {
                    cout<<val;

                    if(i%2==0)  //at even rows val decreasing
                        val--;
                    else
                    {
                        val++;   //at odd rows val increasing
                        start_val++;  //bcz at even rows startval+=i and it works at last val of odd row so to make the starting val last one we increase it at odd rows
                    }                                   
                }
                else
                    cout<<"*";
                
                flag=1-flag;      //toggling values of flag every time to print * and no

            }
            else   
                cout<<" ";
            
        }

        cout<<endl;
        
    }
    

    return 0;
}