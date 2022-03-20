//https://leetcode.com/problems/sum-of-subarray-minimums/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    vector<int> NSL(vector<int> a)
    {
        stack<pair<int, int>> s;
        vector<int> nsl;
        
        for(int i=0; i<a.size(); i++)
        {
            if(s.empty())
                nsl.push_back(-1);
            else if(s.top().first < a[i])
                nsl.push_back(s.top().second);
            else
            {
                while(!s.empty() && s.top().first >= a[i])
                    s.pop();
                
                if(s.empty())
                    nsl.push_back(-1);
                else
                    nsl.push_back(s.top().second);
            }
            
            s.push({a[i], i});
        }
        
        return nsl;
    }
    
    vector<int> NSR(vector<int> a)
    {
        stack<pair<int, int>> s;
        vector<int> nsr;
        
        for(int i=a.size()-1; i>=0; i--)
        {
            if(s.empty())
                nsr.push_back(a.size());
            else if(s.top().first <= a[i])
                nsr.push_back(s.top().second);
            else
            {
                while(!s.empty() && s.top().first > a[i])
                    s.pop();
                
                if(s.empty())
                    nsr.push_back(a.size());
                else
                    nsr.push_back(s.top().second);
            }
            
            s.push({a[i], i});
        }
        
        reverse(nsr.begin(), nsr.end());
        return nsr;
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        
        vector<int> nsl=NSL(arr);
        vector<int> nsr=NSR(arr);
        
        
        long int res=0;
        
        long int st, end, size, pos, freq;
        
        for(int i=0; i<arr.size(); i++)
        {
            st=nsl[i]+1, end=nsr[i]-1;
            size=end-st+1, pos=i-st;
            
            freq=(size-pos)*(pos+1);
            res+=(freq*arr[i]);
            res=res%(1000000007);
        }
        
        return res%1000000007;
    }
};

class Solution {
public:
    
    vector<int> NSL(vector<int> a)
    {
        stack<pair<int, int>> s;
        vector<int> nsl;
        
        for(int i=0; i<a.size(); i++)
        {
            if(s.empty())
                nsl.push_back(-1);
            else if(s.top().first < a[i])
                nsl.push_back(s.top().second);
            else
            {
                while(!s.empty() && s.top().first >= a[i])
                    s.pop();
                
                if(s.empty())
                    nsl.push_back(-1);
                else
                    nsl.push_back(s.top().second);
            }
            
            s.push({a[i], i});
        }
        
        return nsl;
    }
    
    vector<int> NSR(vector<int> a)
    {
        stack<pair<int, int>> s;
        vector<int> nsr;
        
        for(int i=a.size()-1; i>=0; i--)
        {
            if(s.empty())
                nsr.push_back(a.size());
            else if(s.top().first <= a[i])
                nsr.push_back(s.top().second);
            else
            {
                while(!s.empty() && s.top().first > a[i])
                    s.pop();
                
                if(s.empty())
                    nsr.push_back(a.size());
                else
                    nsr.push_back(s.top().second);
            }
            
            s.push({a[i], i});
        }
        
        reverse(nsr.begin(), nsr.end());
        return nsr;
    }
    
    int sumSubarrayMins(vector<int>& arr) {
        
        vector<int> nsl=NSL(arr);
        vector<int> nsr=NSR(arr);
        
        
        long int res=0;
        
        long int st, end, size, pos, freq;
        
        for(int i=0; i<arr.size(); i++)
        {
            st=nsl[i]+1, end=nsr[i]-1;
            size=end-st+1, pos=i-st;
            
            freq=(end-i+1)*(i-st+1);
            res+=(freq*arr[i]);
            res=res%(1000000007);
        }
        
        return res;
    }
};