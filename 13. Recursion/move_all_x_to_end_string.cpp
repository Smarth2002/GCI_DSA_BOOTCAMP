//https://www.geeksforgeeks.org/move-all-occurrence-of-letter-x-from-the-string-s-to-the-end-using-recursion/

#include<bits/stdc++.h>
using namespace std;

string solve(string str, int index, int count=0)
{
    if(index == str.size())
    {
        str.append(count, 'x');
        return str;
    }

    if(str[index] == 'x')
    {
        str.erase(str.begin()+index);
        return solve(str, index, count+1);
    }
    else
        return solve(str, index+1, count);
}

string solve_2(string str)
{
    if(str.size() == 0)
    {
        return str;
    }

    if(str[0] == 'x')
    {
        return solve_2(str.substr(1))+'x';
    }
    else
    {
        return str[0]+solve_2(str.substr(1));
    }
    
}

void solve_3(string str, int index)
{
    if(index == str.size())
    {
        return;
    }

    if(str[index] != 'x')
        cout<<str[index];

    solve_3(str, index+1);

    if(str[index] == 'x')
        cout<<str[index];
}

int main()
{
    string str="geekxsforgexxeksxx";

    solve_3(str, 0);

    return 0;
}