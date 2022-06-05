//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/terrible-chandu/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string str; //simply print in reverse order or reverse and then print
        cin>>str;

        for (int i = str.size() - 1; i >= 0; i--) //we can also use reverse function reverse(str.begin(), str.end())
        {
            cout<<str[i];
        }
        
        cout<<endl;
    }
    
    return 0;
}