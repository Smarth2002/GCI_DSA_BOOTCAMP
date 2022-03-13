/*Take input of age of 3 people by user and determine oldest and youngest among them.*/

#include<iostream>
using namespace std;

int main()  //deciding max no first... ,bycomparing first with remaining both and then further checking for min...then further making 2 cases for remaining conditions for 2 max nos.. 
{
    int a,b,c,max,min;  
    cin>>a>>b>>c;

    if(a>b && a>c)
    {
        max=a;

        if(b>c)
            min=c;
        else
            min=b;
    }

    else if(b>c)
    {
        max=b;

        if(a>c)
            min=c;
        else
            min=a;
    }

    else
    {
        max=c;

        if(a>b)
            min=b;
        else
            min=a;
    }

    cout<<"max no is: "<<max<<endl<<"min no is: "<<min;

    return 0;
    
}