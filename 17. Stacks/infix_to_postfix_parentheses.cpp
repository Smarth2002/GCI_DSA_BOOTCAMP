#include<bits/stdc++.h>
using namespace std;

bool HasHigherPrecedence(char curr, char top)
{
    if( ((curr == '+' || curr == '-') && (top == '+' || top == '-')) || ((curr == '*' || curr == '/') && (top == '*' || top  == '/')) || ((curr == '-' || curr == '+') && (top == '*' || top == '/')) )
        return true;
    
    return false;
}

string InfixToPostfix(string infix)
{
    string postfix;
    stack<char> s;

    for (int i = 0; i < infix.size(); i++)
    {
        if(infix[i] == ' ')
            continue;
        else if(infix[i] == '(')
            s.push('(');
        else if( (infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= '0' && infix[i] <= '9') )
            postfix+=infix[i];
        
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/')
        {
            while (!s.empty() && s.top() != '(' && HasHigherPrecedence(infix[i], s.top()) )
            {
                postfix+=s.top();
                s.pop();
            }
            
            s.push(infix[i]);
        }

        else if(infix[i] == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix+=s.top();
                s.pop();
            }
            
            if(s.top() == '(')
                s.pop();
        }
    }
    while (!s.empty())
    {
        postfix+=s.top();
        s.pop();
    }
    
    return postfix;
}

int main()
{
    string infix;
    getline(cin, infix);

    cout<<InfixToPostfix(infix);

    return 0;
}