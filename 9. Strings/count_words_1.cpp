//3. Write a program to count number of words in string.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int space=0, i=0;

    while ( str[i] != '\0' )
    {
        if( str[i] ==  ' ' )
            space++;
        
        i++;
    }

    cout<<"no. of words are: "<<space+1;

    
    return 0;
}