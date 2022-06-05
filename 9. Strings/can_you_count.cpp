//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/can-you-count-11795975/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string str;
        cin>>str;

        int freq[5]={};
        long long int ans=1; //bcz ans will keep increasing for more vowels and underscores

/*no of distinct strings = product of distinct vowels before every underscore 
(bcz on taking same vowel we not get distinct strings) we can use that vowel again in another underscore present 
later in string so we not reset the freq[] array as these values will also be multiplied along with some other
distinct vowels that we encounter along the way to next underscore
so we count distinct vowels before each underscore and store it in array 
first we keep on increasing freq of distinct vowels and on encountering underscore we multiply the
sum of freq  */

        for (int i = 0; i < str.size(); i++)
        {
            if(str[i] == 'a')
            {
                if(freq[0] == 0) //if vowel is already there than not incremenet to count only distinct ones
                    freq[0]++;
            }
            else if(str[i] == 'e')
            {
                if(freq[1] == 0)
                    freq[1]++;
            }
            else if(str[i] == 'i')
            {
                if(freq[2] == 0)
                    freq[2]++;
            }
            else if(str[i] == 'o')
            {
                if(freq[3] == 0)
                    freq[3]++;
            }
            else if(str[i] == 'u')
            {
                if(freq[4] == 0)
                    freq[4]++;
            }
            else if(str[i] == '_')
            {                               
                ans = ans * (freq[0] + freq[1] + freq[2] + freq[3] + freq[4]);                
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}