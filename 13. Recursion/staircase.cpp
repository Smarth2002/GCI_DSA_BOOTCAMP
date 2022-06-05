//https://www.geeksforgeeks.org/count-ways-reach-nth-stair-using-step-1-2-3/
//https://www.geeksforgeeks.org/count-ways-reach-nth-stair/

#include<bits/stdc++.h>
using namespace std;

int ways_nthStair_1(int n)
{
    if(n == 0 || n == 1)
        return 1;
    
    return ways_nthStair_1(n-1)+ways_nthStair_1(n-2);
}

int ways_nthStair_2(int n) //using 1,2,3 steps
{
    if(n == 1 || n == 0)
        return 1;
    if(n == 2)
        return 2;
    if(n == 3)
        return 4;
    
    return ways_nthStair_2(n-1)+ways_nthStair_2(n-2)+ways_nthStair_2(n-3);
}

int main()
{
    cout<<ways_nthStair_1(10);
    return 0;
}