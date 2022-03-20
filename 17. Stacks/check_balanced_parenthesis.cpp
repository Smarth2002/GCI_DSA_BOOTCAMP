#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == ')' || s[i] == ']' || s[i] == '}')
        {
            if(stk.empty())
                return false;
                
            if(s[i] == ')')
            {
                if(stk.top() == '(')
                    stk.pop();
                else
                    break;
            }
            else if(s[i] == '}')
            {
                if(stk.top() == '{')
                    stk.pop();
                else
                    break;
            }
            else if(s[i] == ']')
            {
                if(stk.top() == '[')
                    stk.pop();
                else
                    break;
            }
        }
        else
            stk.push(s[i]);
    }
    
    return stk.empty();
}

int main()
{
    string stk;

    getline(cin, stk);

    if(isBalanced(stk))
        cout<<"balanced";
    else
        cout<<"UNBALANCED";

    return 0;
}