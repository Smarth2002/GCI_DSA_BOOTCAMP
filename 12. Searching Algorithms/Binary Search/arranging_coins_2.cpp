//https://leetcode.com/problems/arranging-coins/

#include<bits/stdc++.h>
using namespace std;

int arrangeCoins(int n) 
{       
    /*
    Find the maximum k such that 
    k(k+1)/2 <= n

    k(k+1)≤2N

    (k+1/2)^2 - 1/4 <= 2n

    k <= (2n+1/4)^1/2 - 1/2
    */         
    return sqrt(2 * (long) n + 0.25)-0.5;
}