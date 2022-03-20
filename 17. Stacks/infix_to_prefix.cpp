#include<bits/stdc++.h>
using namespace std;

bool isRightAssociative(char ch)
{
    if(ch == '^')   
        return true;
    return false;
}

int getWt(char ch)
{
    int wt;

    switch (ch)
    {
        case '+':
        case '-':
            wt=1;
            break;
        case '*':
        case '/':
            wt=2;
            break;
        case '^':
            wt=3;
            break;
    }

    return wt;
}

bool HasHigherPrecedence(char curr, char top)
{
    int wtCurr=getWt(curr);
    int wtTop=getWt(top);

    if(curr == '-' && top == '/')
    {
        cout<<wtCurr<<" "<<wtTop<<endl;
    }

    if(wtTop > wtCurr)
        return true;

    if(wtCurr == wtTop)
    {
        if(isRightAssociative(curr))
            return true;
        return false;
    }
    return false;
}

string InfixToPrefix(string infix)
{
    string prefix;
    stack<char> s;

    for (int i = infix.size() - 1; i >= 0; i--)
    {
        if(infix[i] == ' ')
            continue;
        else if( (infix[i] >= 'A' && infix[i] <= 'Z') || (infix[i] >= '0' && infix[i] <= '9') )
            prefix+=infix[i];
        else if(infix[i] == ')')
            s.push(')');

        else if( infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' )
        {   
            while ( !s.empty() && s.top() != ')' && HasHigherPrecedence(infix[i], s.top()) )
            {
                prefix+=s.top();
                s.pop();
            }
            
            s.push(infix[i]);
        }

        else if(infix[i] == '(')
        {
            while (!s.empty() && s.top() != ')')
            {
                prefix+=s.top();
                s.pop();
            }
            if(s.top() == ')')
                s.pop();
        }
        
        /*
        if(!s.empty())
            cout<<s.top()<<endl;
         */
    }
    
    while (!s.empty())
    {
        prefix+=s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
    return prefix;
}

int main()
{
    string infix;
    getline(cin, infix);

    cout<<InfixToPrefix(infix);

    return 0;
}