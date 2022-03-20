//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        
        for(int i=0; i<s.size(); i++)
        {
            if(st.empty())
                st.push(s[i]);
            else if(st.top() == s[i])
                st.pop();
            else
                st.push(s[i]);
        }
        
        string s1="";
        
        while(!st.empty())
        {
            s1+=st.top();
            st.pop();
        }
        
        reverse(s1.begin(), s1.end());
        return s1;
    }
};

class Solution {
public:
    string removeDuplicates(string s) {
        
        string res="";
        
        for(int i=0; i<s.size(); i++)
        {
            if(res == "" || res[res.size()-1] != s[i])
                res.push_back(s[i]);
            else
                res.pop_back();
        }
        
        return res;
    }
};

class Solution {
public:
    string removeDuplicates(string s) {
        
        int j=0, i;
        for( i=0; i<s.size(); i++,j++)
        {
            s[j]=s[i];
            
            if(j > 0 && s[j] == s[j-1])
                j-=2;
        }
        
        return s.substr(0, j);
    }
};