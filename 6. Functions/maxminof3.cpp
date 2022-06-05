/*Define two functions to print the maximum and the minimum number respectively among three numbers 
entered by user.*/

#include<iostream>
using namespace std;

int max (int a, int b, int c)
{
    if( a>b && a>c)
        return a;

    else if (b>c)
        return b;
    
    else
        return c;  
}

int min( int a, int b, int c )
{
    if(a<b && a<c)
        return a;
    
    else if(b<c)
        return b;

    else
        return c;
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    cout<<"max is: "<<max(a,b,c)<<endl;
    cout<<"min is: "<<min(a,b,c);

    return 0;
}