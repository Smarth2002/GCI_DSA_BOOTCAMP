//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/remove-duplicates-3/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int freq[26]={}; //to count frequencies of each element and simultaneously delete elements with freq>=2

    for (int i = 0; i < str.size(); i++)
    {
        freq[str[i]-'a']++; //first increase freq

        if(freq[str[i]-'a'] >= 2) //then check if its >=2...dont decrease freq as it doesnt matter, after freq=1 every same element has to be deleted
        {
            str.erase(i, 1);
            i--; // otherwise it will skip one element as string shift toweards left (indices decreases)
        }
    }
    
    cout<<str<<endl;

    return 0;
}