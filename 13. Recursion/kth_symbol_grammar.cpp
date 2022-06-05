//https://leetcode.com/problems/k-th-symbol-in-grammar/

#include<bits/stdc++.h>
using namespace std;

int kth_symbol(int n, int k)
{
    if(n == 1)  
        return 0;
    
    if(k <= pow(2, n-1)/2)
        return kth_symbol(n-1, k);
    
    return 1-kth_symbol( n-1, k-(pow(2, n-1)/2) );
}

int main()
{
    cout<<kth_symbol(4, 8);

    return 0;
}