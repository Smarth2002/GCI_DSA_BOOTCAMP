//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/binary-swap-b91d9bef/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;

/*length of both strings are equal so we check if any element is not matching in a and b then it will 
require opp element like if element=0 than it require 1 so we keep counting 0s and 1s if element
mismatches and at emd compare if no of 0s at wrong position = no of 1s a wrong position so that we can swap 
so print either no if it matches bcz 1 swap fix one 0 and one 1

but if not matches it mean no of 0s at wrong position (no of 1s reqd) != no of 1s at wrong position (no of 1s to swap
so its not possible)*/

    int count_0=0, count_1=0; 

    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] != b[i])
        {
            if(b[i] == '1')
                count_1++;
            else
                count_0++;
        }
    }
    
    if(count_1 == count_0)
        cout<<count_1;    
    else                  
        cout<<"-1";
    
    return 0;
}