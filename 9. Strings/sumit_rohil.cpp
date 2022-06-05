//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/sumit-and-rohil/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int no;
    cin>>no;

    string str[no]; //make an array of strings (2d array) to store list of n strings

    for (int i = 0; i < no; i++)
    {
        cin>>str[i];
    }

//make an array to mark repeated elements to not check for their group members that are already been included in a group

    int repeat[no]={}, ans=0;

    for (int i = 0; i < no; i++) //check all the strings with remaining strings to find their group members
    {
        if(repeat[i] == 0) //if the members is not already included in group 
        {

            char first=str[i][0]; //first char
            char last=str[i][str[i].size()-1]; //last char
            string sorted1=str[i]; //sorted string to check with remaining sorted strings
            sort(sorted1.begin(), sorted1.end());

/* repeat[j]=0 bcz if one element has already been put into group of some previous element(i) then it cant be in group of any other element
and on placing 1 at the repeat array element position we neither check that element for its group members with other elements bcz
its already placed in group by checking nor we check it while finding group members of an element bcz same element
cant be in more than 1 group
bcz we are  */

            for (int j = i+1; j < no; j++) //check and compare with remaining elements
            {    
                if(str[j][0] == first && str[j][str[j].size()-1] == last && repeat[j] == 0) 
                {
                    string sorted2=str[j];
                    sort(sorted2.begin(), sorted2.end());

                    if(sorted1 == sorted2)                
                        repeat[j]=1;
                    
                }        
            }

            ans++;
/*  // increase ans for every element which is not repeated (repeat[i]=0) whether its group members exist or not
bcz 1 category will always be made for that element */
        }
    }
    
    cout<<ans;
    
    return 0;
    
}