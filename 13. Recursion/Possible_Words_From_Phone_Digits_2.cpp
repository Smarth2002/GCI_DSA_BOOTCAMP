//https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/

#include <bits/stdc++.h>
#include <string>

using namespace std;
class Solution
{
    public:
    
    void solve(vector<char> keypad[], vector<string>& ans, int a[], string op, int idx, int size)
    {
        if(idx == size)
        {
            ans.push_back(op);
            return;
        }
        
        int digit=a[idx];
        
        for(int i=0; i<keypad[digit].size(); i++)
        {
            string op1=op;
            op1.push_back(keypad[digit][i]);
            
            solve(keypad, ans, a, op1, idx+1, size);
        }
    }
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        
        vector<string> ans;
        
        vector<char> keypad[]=
        {
            {}, {},        // 0 and 1 digit don't have any characters associated
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
        };
        
        string op="";
        
        solve(keypad, ans, a, op, 0, N);
        
        return ans;
    }
};