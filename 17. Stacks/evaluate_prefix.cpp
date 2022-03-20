#include<bits/stdc++.h>
using namespace std;

int prefixVal(string str)
{
    stack<int> s;

    for (int i = str.size()-1; i >= 0; i--)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            string val="";

            while (str[i] != ' ')
            {
                val+=str[i];
                i--;
            }

            reverse(val.begin(), val.end());
            int operand=stoi(val);
            s.push(operand);
        }
        else if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if(s.size() < 2)
            {
                cout<<"error";
                break;
            }

            int res;

            int operand1=s.top();
            s.pop();
            int operand2=s.top();
            s.pop();

            if(str[i] == '+')
                res=operand1+operand2;
            else if(str[i] == '-')
                res=operand1-operand2;
            else if(str[i] == '*')
                res=operand1*operand2;
            else if(str[i] == '/')
                res=operand1/operand2;
            
            s.push(res);
        }
    }
    
    return s.top();
}

int main()
{
    string str;
    getline(cin, str);

    cout<<prefixVal(str);
    return 0;
}