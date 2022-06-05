//https://www.geeksforgeeks.org/program-count-digits-integer-3-different-methods/

#include<bits/stdc++.h>
using namespace std;

int digit=0;

int count(int no)
{
    if(no != 0)
    {
        digit++;
        count(no/10);
    }

    return digit;
}

int main()
{
    cout<<count(-500);

    return 0;
}