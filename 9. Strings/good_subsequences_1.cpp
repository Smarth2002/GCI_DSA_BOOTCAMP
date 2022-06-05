/*https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/good-sequences-46c31a23/*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

/*Answer is the product of the frequency of every distinct character that appears in the input string.

Proof: Maximum length is achieved when we include every distinct character that appears in the string,
in the good subsequence. Also, for every character ch, we have freq[ch] (freq) options of choosing that character.
Hence the answer is the product of the frequencies. */

    int ans=1, repeat[str.size()]; //repeat is an array to store -1 at the index of repeated element

    for (int i = 0; i < str.size()-1; i++)
    {
        int j=i+1;
        int freq=1;

        if(repeat[i] != -1)
        {
            while (j < str.size()) //check if any element in string matches i to find freq
            {
                if(str[i] == str[j])
                {
                    freq++;
                    repeat[j]=-1; //storing -1 at repeated element position to not check its freq again 
                }

                j++;
            }
        }

        ans*=freq;
    }
    
    cout<<ans;
    
    return 0;
}