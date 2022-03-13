/*Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include<iostream>
using namespace std;

int main()  //checking one no at a time with all nos to decide max and min making 2 cases and further checking by making 2 cases in them
{
    int A,B,C,max,min;

    cout<<" enter age of A,B and C :"<<endl;
    cin>>A>>B>>C;

    if(A>B)
    {
        if (A>C)
        {
            max=A;

            if(B>C)
                min=C;
            else
                min=B;
        }
        else
        {
            max=C;
            min=B;
        }
        
    }

    else
    {
        if(B>C)
        {
            max=B;
        
            if(A>C)
                min=C;
            else
                min=A;
        }
        
        else
        {
            max=C;
            min=A;
        }
        
    }

    cout<<"oldest is: "<<max<<endl<<"yongest is: "<<min;

    return 0;
    
    
    
}