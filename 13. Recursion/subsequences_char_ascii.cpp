//https://www.geeksforgeeks.org/subsequences-generated-by-including-characters-or-ascii-value-of-characters-of-given-string/#:~:text=Subsequences%20generated%20by%20including%20characters%20or%20ASCII%20value%20of%20characters%20of%20given%20string,-Difficulty%20Level%20%3A%20Medium&text=Given%20a%20string%20str%20of,characters%20from%20the%20given%20string.

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

    string op2=op;
    int ascii=ip[0];
    string s=to_string(ascii);
    op2.append(s);

    string op3=op;

    ip.erase(ip.begin()+0);

    solve(ip, op1);
    solve(ip, op2);
    solve(ip, op3);

    return;
}

int main()
{
    string str="ab";
    string op="";

    solve(str, op);

    return 0;
}
