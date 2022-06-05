//https://www.geeksforgeeks.org/first-uppercase-letter-in-a-string-iterative-and-recursive/

#include<bits/stdc++.h>
using namespace std;

char capital(string str)
{
    static int i = 0;

    if( (str[i] >= 65 && str[i] <= 90) || i == str.size() )
        return str[i];
    
    i++;

    return capital(str);
}

int main()
{
    string str="test Case";

    cout<<capital(str);

    return 0;
}