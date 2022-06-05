//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/nobita-and-string-4/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        cin>>ws;
        string str;
        getline(cin, str);

/* swapping 1st with last and second with 2nd last i.e we have to reverse the string with words remaining same
we start from reverse and check if there is space or we have reached 0(bcz there will not be any space before 1st word)
and start printing from there till space/'\0' and all words are printed same in reverse order */

        for (int i = str.size() - 1; i >= 0; i--)
        {
            if(str[i] == ' ' || i == 0) //there is no space before 1st word so we have to make seperate condition for 1st word
            {
                int start;

                if(str[i] == ' ')
                    start=i+1; //bcz current element i=' ' 
                else
                    start=0; //there is no space before 1st word so we have to make condition

                for (int j = start; str[j] != ' ' && str[j] != '\0'; j++) //bcz there is no space after last word 
                {
                    cout<<str[j];
                }         

                cout<<" ";           //space after each word            
            }
        }
        
        cout<<endl;
    }
    
    return 0;
}