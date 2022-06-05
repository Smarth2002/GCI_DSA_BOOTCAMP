/*Print the multiplication table of 15*/

#include<iostream>
using namespace std;

void multiplication_table(int no)
{
    for (int i = 1; i <= 10; i++)
    {
        cout<<no<<"*"<<i<<"="<<no*i<<endl;
    }

    return;
}

int main()
{
    int no;
    cin>>no;

    multiplication_table(no);

    return 0;
}