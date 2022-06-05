/*Given a string, count number of words in it. 
The words are separated by following characters: space (‘ ‘) or new line (‘\n’) or tab (‘\t’) 
or a combination of these.*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int count=0;

/*if we found a special character then we donot increase count bcz if string="hello   there" than it should be 
considered count=1 so we check its next char for same condition and donot increment if next char is also
a special char and increment if next char is a letter*/

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' ) 
        {
            if (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t' )
                continue;
            else
                count++;
        }
       
    }
    
    cout<<count+1;
    
    
    return 0;
}