//https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/string-division/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        string str;
        cin>>str;

        if (str.size() >= 10)
        {
            cout<<"YES";
        }
        else
        {
            for (int i = 1; i < str.size(); i++)
            {
                for (int j = i+1; j < str.size(); j++)
                {                        
                    for (int k = j+1; k < str.size(); k++)
                    {
/* 
str1 starts with 0 so position is fixed 
str2 starts with 1 and starting point can also increase as str 1 increase so made a loop of i from 1 to size
str3 starts with 1 greater than i and as i increases starting point also increases so made a loop of j from i+1 to size
str4 starts with 1 greater than j and as j increases starting pt also increases so made a loop of k from j+1 to size 

here we denoted 0, i, j and k with positions of substrings with size of each starting from 1
(size1, size2, size3, size4) representing sizes of each substring then
(1,1,1,till size), (1,1,2,till size-1), ...till size4 becomes 1
(1,2,1,till size), (1,2,2,till size-1), ...till size4 becomes 1
(1,3,1,till size), (1,3,2,till size-1), ...till j becomes max i.e (size3 and size 4 become 1)
(2,1,1,till size), (2,1,2,till size-1), ...till size 4 becomes 1
.
.
and so on till if any one time all substrings are different

so all positions are known and size of each string start from 1
so express the sizes in terms of positions

so first size of str3 increase leading to decrease in size of str4 (k loop) 
after this j increase leading to increase in size of str2 and shifting in position of str3 and str4 (j increase so k also increase)
after that str3 again start increasing and str4 decreasing 
this all happens for constant length of 1st string and after all combinations i increase
and same process repeats for size=2 of 1st string

and size of all strings is starting from 1 and increase in size of before string also leads to increase in position of after string */             

                        string str1=str.substr(0, i);
                        string str2=str.substr(i, j-i);
                        string str3=str.substr(j, k-j);
                        string str4=str.substr(k, str.size()-k); 
                    }
                }
            }
            
            
        }
        
        
    }
    
}