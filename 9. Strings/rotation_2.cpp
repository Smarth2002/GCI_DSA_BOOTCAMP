/*https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/rotation-1-38ecf5a7/*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int str_size;
    cin>>str_size;

    cin>>ws;

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    for (int i = 0; ; i++) //i represent no of operations made on string
    {
        if( string(str1.begin(), str1.end()) == str2) //checking if strings are equal 
        {
            cout<<i;
            break;
        }

/*deleting characters from left of 1st string and right of 2nd string and checking whether remaining part of 
both strings are equal ...no of characters deleted is the no of operations made

instead of appending the characters we are only deleting assuming we are appending also ...
no of char deleted = no of char appended = no of operations so we are only finding no of char deleted*/

        str1.erase(0, 1); 
        str2.erase(str2.size()-1, 1);

/* deleting from left in 1st string and from right in other to find the characters of starting of str2 that are 
already present in end of str1 and need not to be added again*/
    }
    


    return 0;
}