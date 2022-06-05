#include<iostream>
using namespace std;

int main()
{
    int rows;
    cin>>rows;

    int no=1;

    for (int i = 1; i <= rows; i++)
    {
        if(i%2==0)
            no+=i;
        else
            no=no+i-1;

        for (int j = 1; j <= 2*rows-1; j++)
        {
            if(j<=2*i-1)
            {
                if(j%2==0)
                    cout<<"*";
                else
                {
                    cout<<no;

                    if(j<2*i-1)
                    {
                        if(i%2==0)
                            no--;
                        else
                            no++;
                    }
                }
                
            }           

            else
                cout<<" "; 
        }

        cout<<endl;
        
    }
    
    

    return 0;
    
}