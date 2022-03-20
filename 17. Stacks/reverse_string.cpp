#include<bits/stdc++.h>
using namespace std;

void reverse(string& str)
{
    stack<char> s;

    for (int i = 0; i < str.size(); i++)
    {
        s.push(str[i]);
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        str[i]=s.top();
        s.pop();
    }

    return;
}

int main()
{
    string str;
    getline(cin, str);

    reverse(str);

    cout<<str;

    return 0;
}