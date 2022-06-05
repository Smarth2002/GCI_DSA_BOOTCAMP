//https://www.geeksforgeeks.org/recursive-program-to-replace-all-occurrences-of-pi-with-3-14-in-a-given-string/

#include<bits/stdc++.h>
using namespace std;

string solve(string str, int index)
{
    if(index+1 >= str.size())
        return str;
    
    if(str[index]=='p' && str[index+1] == 'i')
    {
        str.insert(index, "3.14");
        str.erase(index+4, 2);

        return solve(str, index+4);
    }
    else
    {
        return solve(str, index+1);
    }
}

string solve_2(string s)
{
    if(s.size() == 0 || s.size() == 1)
        return s;

    if(s[0] == 'p' && s[1] == 'i')
    {
        return "3.14"+solve_2(s.substr(2));
    }
    else
    {
        return s[0]+solve_2(s.substr(1));
    }
    
}

int main()
{
    string str="pippppiiiipi";
    int index=0;

    cout<<solve_2(str);

    return 0;
}