//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/compiler-version-2/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;

/* we want to input the string as long as user enter valid input so we use getline() in while as it returns
true on entering valid input
so everytime on getting input we modify the string and print side by side */

    while (getline(cin, str))
    {
/*to compare next element so that j+1 is not out of bounds 
(as '/' or '-' exist before the last element str.size()-1 as they are of 2 char) */

        for (int i = 0; i < str.size()-1; i++) 
        {
            if(str[i] == '-' && str[i+1] == '>')
            {
                str[i]='.';             //replace first char with '.'
                str.erase(i+1, 1);      //delete other
            }
            else if (str[i] == '/' && str[i+1] == '/') //stop checking after // as string after it will remain same
            {
                break;
            }
        }
        
        cout<<str<<endl;
    }
    

    return 0;
}