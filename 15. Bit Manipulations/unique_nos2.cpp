//https://www.geeksforgeeks.org/find-two-non-repeating-elements-in-an-array-of-repeating-elements/

#include<bits/stdc++.h>
using namespace std;

int getIthBit(int no, int i)
{
    int mask=1<<i;

    if(no & mask)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int xor_whole=0;

    for (int i = 0; i < n; i++)
    {
        xor_whole=xor_whole^a[i];
    }
    
    int pos=0;
    int copy=xor_whole;

    while (copy > 0)
    {
        if(copy & 1)
            break;
        pos++;
        copy=copy>>1;
    }
    
    int xor_part1=0;

    for (int i = 0; i < n; i++)
    {
        if(getIthBit(a[i], pos))
        {
            xor_part1=xor_part1^a[i];
        }
    }
    
    int no1=xor_part1;
    int no2=xor_whole^no1;

    cout<<no1<<" "<<no2;

    return 0;
}