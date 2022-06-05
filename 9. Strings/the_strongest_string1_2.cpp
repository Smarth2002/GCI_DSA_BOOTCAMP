//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/the-strongest-string-1-1/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    string str;
    cin>>str;

/* first we sort the string and reverse it as sorting by default is in ascending order
so we get lexicographically greatest string from the given string
then we remove the repeating elements to make it unique

now we got lexicographically greatest unique string
now we want subsequence i.e position of next element should be greater than previous element for whole string */

    string sorted=str;
    sort(sorted.begin(), sorted.end());
    reverse(sorted.begin(), sorted.end());

    for (int i = 0; i < sorted.size()-1; i++)
    {
        if(sorted[i] == sorted[i+1]) //as same elements will be adjacent to each other after sorting
        {
            sorted.erase(i+1, 1);
            i--;
        }
    }
/* store its position in start and find next element after this start range and if found between the range 
then it means that letter is in right of previous one in str (subsequence can be formed) so append it in ans
and update start with that position and if not found then we move to next element and check its presence */

    string ans="";
    ans+=sorted[0]; //lexicographically greatest unique subsequence will begin from sorted[0](biggest char)
    int start=str.find(sorted[0]); 

    for (int i = 1; i < sorted.size(); i++)
    {
        if( str.find(sorted[i], start) > start && str.find(sorted[i], start) < str.size()  )
        {
            start=str.find(sorted[i], start);
            ans+=sorted[i];
        }
    }
    
    cout<<ans<<endl;

    return 0;
}