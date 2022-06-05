//https://practice.geeksforgeeks.org/problems/permutation-with-spaces/0

#include<bits/stdc++.h>
using namespace std;

void permutation(string ip, string op)
{
    if(ip == "")
    {
        cout<<op<<endl;
        return;
    }

    string op1=op;
    string op2=op;

    op1.push_back(' ');
    op1.push_back(ip[0]);

    op2.push_back(ip[0]);

    ip.erase(ip.begin()+0);

    permutation(ip, op1);

    permutation(ip, op2);

    return;
}

int main()
{
    string ip="ABC";
    string op="";

    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    permutation(ip, op);

    return 0;
}