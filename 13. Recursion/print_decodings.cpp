//https://www.geeksforgeeks.org/print-all-possible-decodings-of-a-given-digit-sequence/

#include<bits/stdc++.h>
using namespace std;

void solve(string ip, string op)
{
    if(ip.size() == 0)
    {
        cout<<op<<endl;
        return;
    }

    if(ip[0] != '0')
    {
        string ip1=ip;
        string op1=op;

        /*
        alternative
        int ascii=ip[0]-'0'
        char ch=char('a'+ascii-1)
        op1.push_back(ch)
        */

        op1.push_back(ip[0]+48);
        ip1.erase(ip1.begin()+0);

        solve(ip1, op1);

        if(ip.size() >= 2)
        {
            string ip2=ip;
            string op2=op;

            string sub=ip2.substr(0, 2);

            int ascii=stoi(sub);

            /*
            char ch=char('a'+ascii-1)
            op2.push_back(ch)
            */

            if(ascii <= 26)
            {
                op2.push_back(ascii+96);

                ip2.erase(0, 2);

                solve(ip2, op2);
            }
        }
    }

    return;
}

void decodings(string str)
{
    string op="";

    solve(str, op);
}

int main()
{
    string str="103";

    decodings(str);

    return 0;
}