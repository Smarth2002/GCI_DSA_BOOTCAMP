//https://leetcode.com/problems/backspace-string-compare/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
            stack<char> st;

            for(int i=0; i<s.size(); i++)
            {
                if(s[i] == '#')
                {
                    if(!st.empty())
                        st.pop();
                }
                else
                    st.push(s[i]);
            }

            string s1="";
            while(!st.empty())
            {
                s1+=st.top();
                st.pop();
            }

            for(int i=0; i<t.size(); i++)
            {
                if(t[i] == '#')
                {
                    if(!st.empty())
                        st.pop();
                }
                else
                    st.push(t[i]);
            }

            string t1="";
            while(!st.empty())
            {
                t1+=st.top();
                st.pop();
            }

            if(s1 == t1)
                return true;
            return false;
        }
    
};

class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int bs=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '#')
                bs++;
            else
            {
                if(bs > 0)
                {
                    s.erase(i, 1);
                    bs--;
                }
            }
        }
        
        bs=0;
        for(int i=t.size()-1; i>=0; i--)
        {
            if(t[i] == '#')
                bs++;
            else
            {
                if(bs > 0)
                {
                    t.erase(i, 1);
                    bs--;
                }
            }
        }
        
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '#')
                s.erase(i, 1);
        }
        for(int i=t.size()-1; i>=0; i--)
        {
            if(t[i] == '#')
                t.erase(i, 1);
        }
        
        if(s == t)
            return true;
        return false;
    } 
};

class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int bs=0;
        
        string s1="";
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i] == '#')
                bs++;
            else
            {
                if(bs > 0)
                    bs--;
                else
                    s1+=s[i];
            }
        }
        
        bs=0;
        
        string t1="";
        for(int i=t.size()-1; i>=0; i--)
        {
            if(t[i] == '#')
                bs++;
            else
            {
                if(bs > 0)
                    bs--;
                else
                    t1+=t[i];            
            }
        }
        
        
        
        if(s1 == t1)
            return true;
        return false;
    }
};

class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        int bs1=0, bs2=0;
        
        int i=s.size()-1, j=t.size()-1;
        
        while(true)
        {
            while(i >= 0)
            {
                if(s[i] == '#')
                {
                    bs1++;
                    i--;
                }
                else 
                {
                    if(bs1 > 0)
                    {
                        bs1--;
                        i--;
                    }
                    else
                        break;
                }
            }

            while(j >= 0)
            {
                if(t[j] == '#')
                {
                    bs2++;
                    j--;
                }
                else 
                {
                    if(bs2 > 0)
                    {
                        bs2--;
                        j--;
                    }
                    else
                        break;
                }
            }

            if(i < 0 && j < 0)
                return true;
            else if(i < 0 || j < 0)
                return false;
            else if(s[i] == t[j])
            {
                i--;
                j--;
            }
            else
                return false;
        }
        
    }
  
};