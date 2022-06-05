//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/aliceandstrings-9da62aa7/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);


    if(str1.size() != str2.size()) //if size of 2 strings are not same then simply they are not compatible
        cout<<"NO";
    else
    {
        int i=str1.size()-1; //start checking from backwards in both strings
        int min_diff=str2[i]-str1[i]; //take diff of last 2 char in both strings as min 

        while (i >= 0) //traverse and check complete string
        {
/*diff of elements at previous position should be either equal or greater than the diff of elements at greater
position means diff of elements at 0 index should b greatest */

            if(str2[i]-str1[i] < min_diff) //if diff of elements at any position found to be less than the diff at 1 position higher than break loop and print NO
            {
                cout<<"NO";
                break;
            }
/*update min_diff bcz diff of elements at position should not be less than diff of elements at position 1 greater
so update it with current diff to check diff of prev element and so on as we are traversing backwards*/

            min_diff=str2[i]-str1[i]; 

            i--;
        }
        
        if(i == -1) //we exit from loop if either i<0 or if diff of elements at current position is less than diff of elements at position 1 higher than current
            cout<<"YES";
    }
    
    return 0;
    
}
