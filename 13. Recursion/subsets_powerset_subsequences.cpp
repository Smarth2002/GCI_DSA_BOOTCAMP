//https://www.geeksforgeeks.org/recursive-program-to-generate-power-set/

#include<bits/stdc++.h>
using namespace std;

/*
subsequence and subset are different terms, all subsequences are subsets but reverse is not true
in subsets order not matter so so for{a,b,c}=subsequences{ac, ...} but subset(ac,ca) both correct
so to print subsets we print subsequences to avoid many combinations of same set
*/

void solve(string ip, string op) 
{
    if(ip == "")
    {
        cout<<op<<endl;
        return;
    }

    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);

    solve(ip, op1);
    solve(ip, op2);

    return;
}

int main()
{
    string ip="abc";
    string op="";

    solve(ip, op);

    return 0;
}