/*Define a program to find out whether a given number is even or odd.*/

#include<iostream>
using namespace std;

void even_odd(int no)
{
    if(no==0)
        cout<<"neither even nor odd";       
    else if(no%2==0)
        cout<<"even";
    else
        cout<<"odd";
    
    return;
}

int main()
{
    int no;
    cin>>no;

    even_odd(no);

    return 0;
}