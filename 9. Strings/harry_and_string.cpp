//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/?sort_by=partially%20solved&p_level=V-E

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string str1, str2;
        cin>>str1;

        for (int i = 0; i < str1.size(); i++) //to make a new string containing only vowels to check their order
        {
            if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u')
            {
                str2+=str1[i];     //appending/ adding vowels in str2           
            }
        }
        
        string str3=str2; //sort the string str2 containing vowels in alphabetical order 
        sort( str3.begin(), str3.end() );

        if(str3 == str2) //if both match (means str2 was already sorted)
            cout<<"Good";
        else
        {
            reverse( str2.begin(), str2.end() ); //st3 is in alphabetical order and str2 is not...so reverse str2 (if it was in reverse alphabetical order than it will become in alphabetical order and match str3)

            if(str3 == str2)
                cout<<"Worst";
            else                      //if still unequal than bad
                cout<<"Bad";
        }

        cout<<endl;
    }
    
    return 0;
}