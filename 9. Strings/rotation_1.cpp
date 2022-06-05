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

    int i=str1.size()-1, j=str2.size()-1; //pointing to end of both strings
    int start;

/*start comparing from end of both strings to check if they are already same and check if any substring
(part of 2nd string)
exist in 1st string from end of 2nd string till start of 2nd string like 1st check if whole 2nd string is there
than reduce j and again check  and so on. if any char in both matches then reduce i and j both till 
all characters till start of string 2 matches and increment start
 (bcz we have to find out the starting part in string 2 that is already there in string 1 
 and not needed to be added)...if any size of substring (even 1) matches till
start of string 2 then we need to add the remaining part of str2 and  */

    while (j >= 0) //traversing complete 2nd string 
    {
        int curr_j=j; //dummy variable to increment/decrement to traverse if char matches
        int i=str1.size()-1; //always start from last position / reset the position in str1 if substring not found

        while (curr_j >= 0) //checking if char starting with j matches substring
        {
            if(str1[i] != str2[curr_j])
            {
                start=0;
                break;
            }

            i--;
            curr_j--;
            start++;
        }

        if(curr_j < 0) //if substring is found and curr_j has completely traversed str2 then no need to check further
            break;

        j--;        
    }

/*now we can also simply find op by op=str.size()-start bcz until start char are same after it char is to be added
and each addition implies 1 op so*/

    int op=0; //no of operations

    while (start < str2.size())
    {
        str1.erase(0, 1); //delete 1 element from position=0 and reduce size of string
        str1.push_back(str2[start]); //append character at last position

        start++;
        op++;
    }

    cout<<op;
   
    return 0;
}