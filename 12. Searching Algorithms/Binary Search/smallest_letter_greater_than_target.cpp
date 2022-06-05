//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

#include<bits/stdc++.h>
using namespace std;

char nextGreatestLetter(vector<char>& letters, char target) 
{
    int start=0, end=letters.size()-1;
    int mid;
    char ans=1;
    
    while(start <= end)
    {
        mid=start+(end-start)/2;
        
        if(letters[mid] > target)
        {
            ans=letters[mid];
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    
    if(ans == 1)
        ans=letters[0];
    
    return ans;
}