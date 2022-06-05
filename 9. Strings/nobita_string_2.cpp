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

/* instead of moving backwards and on encountering a ' ' or 0 index printing it forward until a ' ' or '\0'
in forward direction
we reverse the whole string bcz we have to print in reverse order but it will reverse the words also
so we traverse the whole string and on starting from beginning we keep a starting pt at i then
we increase i until a ' ' or '\0' and then reverse from starting pt till i and keep it doing until i reaches end of string '\0' */

        reverse(str.begin(), str.end());

        for (int i = 0; i < str.size(); i++)
        {
/* //bcz we are iterating i until end and so made it end pointer if we have made i a start pointer then 
we donot know where to end when to stop increasing i

we only know the ending of end pointer  */
            int start=i; 

            while (str[i] != ' ' && str[i] != '\0')
            {
                i++;
            }

            reverse(str.begin()+start, str.begin()+i);
        }
        
        cout<<str<<endl;
    }
    
    return 0;
}