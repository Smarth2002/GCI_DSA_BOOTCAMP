//Take values of length and breadth of a rectangle from user and check if it is square or not.

#include<iostream>
using namespace std;

int main()
{
    int length,breadth;
    cin>>length>>breadth;

    if(length>0 && breadth>0)
    {
    if(length==breadth)
    cout<<"its a square";
    else 
    cout<<"its not a square";
    }
    else
    {
        cout<<"enter valid sides";
    }
    

    return 0;
}