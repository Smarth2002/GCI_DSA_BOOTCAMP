//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/special-shop-69904c91/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        long int n, a, b;
        cin>>n>>a>>b;
    
/*
cost=a*x*x+b*y*y
x+y=n
cost=a*x*x+b*(n-y)*(n-y)
to get min cost we differentiate wrt to x (bcz whole expression in single variable x) and equate to 0 
to get the value of x for which cost function is min 

we get x=bn/a+b
*/

        long int x=(b*n)/(a+b); //if x=3.3 then x=3 so fractional part is ignored and we check cost for x+1 also bcz no of kind 1 can be 3 or 4
        long int min_cost;
        
        long int min_cost_1=a*x*x+b*(n-x)*(n-x);
        long int min_cost_2=a*(x+1)*(x+1)+b*(n-x-1)*(n-x-1);

        if(min_cost_1 < min_cost_2) 
            min_cost=min_cost_1;
        else
            min_cost=min_cost_2;
        

        cout<<min_cost<<endl;
    }
    
    return 0;
}