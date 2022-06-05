//Write a C program to find all factors of a number.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int no;
    cin>>no;

    for(int i=1; i<=sqrt(no); i++)    //can also iterate till no itself i.e i<=no and check for all no's
    {
        if(no%i==0)
        {
            cout<<i<<endl;

            if(i != no/i)
                cout<<no/i<<endl;

        }

    }

    return 0;
}