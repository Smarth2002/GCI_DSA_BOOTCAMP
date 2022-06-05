/*https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/unique-subsequence-264057c9/*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cases;
    cin>>cases;

    string str;

    while (cases--)
    {
        int str_size;
        cin>>str_size;

        cin>>ws; //because on pressing enter after giving size input stores 'n' char in string so ws extract all whitespace characters

        getline(cin, str);

        int n=1; //minimum length subsequence will be 1

        for (int i = 0; i < str_size; i++)
        {
            if(str[i+1] != str[i] && i+1 < str_size) //if different adjacent element then increase n till we reach end
                n++;
        }
        
        cout<<n<<endl;
    }
    

    return 0;
}