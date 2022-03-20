//https://leetcode.com/problems/remove-k-digits/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> NSR(string str)
    {
        stack<pair<char, int>> s;
        vector<int> nsr;
        
        for(int i=str.size()-1; i>=0; i--)
        {
            if(s.empty())
                nsr.push_back(-1);
            else if(s.top().first < str[i])
                nsr.push_back(s.top().second);
            else
            {
                while(!s.empty() && s.top().first >= str[i])
                    s.pop();
                if(s.empty())
                    nsr.push_back(-1);
                else
                    nsr.push_back(s.top().second);
            }
            
            s.push({str[i], i});
        }
        
        reverse(nsr.begin(), nsr.end());
        return nsr;
    }
    
    string removeKdigits(string num, int k) {
        
        vector<int> nsr=NSR(num);
        string res="";
        
        int start=0, end=k;
        
        while(end < num.size())
        {
            int i=start;
            char min=num[start];
            int min_idx=start;
            
            while(i != -1 && i <= end)
            {
                min=num[i];
                min_idx=i;
                i=nsr[i];
            }
            if(res != "" || min != '0')
                res+=min;
            
            start=min_idx+1;
            end++;
        }
        
        if(res == "")
            res+='0';
        return res;
    }
};

class Solution {
public:
    
    string removeKdigits(string num, int k) {
        
        stack<char> min;
        
        min.push(num[0]);
        
        for(int i=1; i<num.size(); i++)
        {
            while(!min.empty() && k > 0  && num[i] < min.top())
            {
                min.pop();
                k--;
            }
            
            if(!min.empty() || num[i] != '0')
                min.push(num[i]);
                
        }
        
        while(k > 0 && !min.empty())
        {
            min.pop();
            k--;
        }
        
        string ans="";
        while(!min.empty())
        {
            ans+=min.top();
            min.pop();
        }
        
        reverse(ans.begin(), ans.end());
        if(ans == "")
            ans+='0';
        return ans;
    }
};