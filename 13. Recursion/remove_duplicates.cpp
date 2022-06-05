//https://www.geeksforgeeks.org/remove-consecutive-duplicates-string/

#include<bits/stdc++.h>
using namespace std;

string removeDuplicate_1(string s)
{
    static int i = 1;
    
    if(s.size() == 1 || i == s.size())
        return s;
    
    if(s[i] == s[i-1])
    {
        s.erase(i, 1);
    }
    else
        i++;
    
    return removeDuplicate_1(s);
}

string removeDuplicate_2(string str)
{
    if(str.size() == 1)
        return str;

    if(str[str.size()-1] == str[str.size()-2])
    {
        str.erase(str.size()-1, 1);

        return removeDuplicate_2(str);
    }
    else
    {
        char last=str[str.size()-1];
        str.erase(str.size()-1);

        return removeDuplicate_2(str)+last;
    }
    
}

int main()
{
    string str="abcdeeefee";

    cout<<removeDuplicate_1(str)<<endl;
    cout<<removeDuplicate_2(str);

    return 0;
}
