#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int no=0;
    int add_val=1;        //value to be added to no is also not fixed

    for (int i = 1; i <= rows; i++)
    {
        no=no+add_val;               
        int sub_val=rows-i+1;           //its the iniial value to be subtracted from the first element in each row
       
        for (int j = 1; j <= i; j++) //only i nos are printed till i
        {
            cout<<no;

            if(no>i)      //no is only subtracted only till its greater than i otherwise after i it will further decrease so no in next row will be affected 
            {
                no=no-sub_val;
                sub_val++;        //value to be subtracted simply increase in a particular row
            }
                
        }
            
        add_val=add_val+(rows-i);  /*this value to be added in starting of each row depend on i of previous row 
                                   i.e (i of current row-1) therefore written at end before starting of new row
                                   ...here value to be added is also changing so made a seperate variable for that*/

        cout<<endl;                 
        
    }

    return 0;
    
}