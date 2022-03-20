#include<bits/stdc++.h>
using namespace std;

int postfixVal(string str)
{
    stack<int> s;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            string val="";

            while (str[i] != ' ')
            {
                val+=str[i];
                i++;
            }
            
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

            int operand2=s.top();
            s.pop();
            int operand1=s.top();
            s.pop();

            int res;

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

    cout<<postfixVal(str);

    return 0;
}