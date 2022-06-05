//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/almost-golden-rectangular-1c9d72c0/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int count=0;

    while (n--)
    {
        long int wid, hght;
        cin>>wid>>hght;

        if( (16*hght <= 10*wid && 10*wid <= 17*hght) || (16*wid <= 10*hght && 10*hght <= 17*wid) )
            count++;
    }
    
    cout<<count;

    return 0;
}