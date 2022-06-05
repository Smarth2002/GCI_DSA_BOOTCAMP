//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/upup/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        if(i == 0) //first letter should be capital and there will no be spaces before it so replace it directly
        {
            if(str[i] >= 'a' && str[i] <= 'z')
                str[i]-=32;
        }
        else if(str[i] == ' ') //if there is space then check if next letter is btw a to z then only change to uppercase...bcz if there are 2 spaces then not directly replace space therfore we checked the next letter
        {
            if(str[i+1] >= 'a' && str[i+2] <= 'z')
                str[i+1]-=32;
        }
    }
    
    cout<<str;
    
    return 0;
}