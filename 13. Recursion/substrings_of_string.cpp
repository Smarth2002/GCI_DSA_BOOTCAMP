//https://www.geeksforgeeks.org/program-print-substrings-given-string/

#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op)
{
    if(ip == "" && op != "")
    {
        cout<<op<<endl;
        return;
    }

    string op1=op;
    op1.push_back(ip[0]);
    string ip1=ip;
    ip1.erase(ip1.begin()+0);

    solve(ip1, op1);

    if(op == "")
    {
        string op2=op;
        string ip2=ip;
        ip2.erase(ip2.begin()+0);

        solve(ip2, op2);
    }
    else
    {
        string op3=op;
        string ip3="";

        solve(ip3, op3);
    }
    
    return;
}

int main()
{
    string str="abcd";
    string op="";

    solve(str, op);

    return 0;
}