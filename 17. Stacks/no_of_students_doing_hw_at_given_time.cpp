//https://leetcode.com/problems/number-of-students-doing-homework-at-a-given-time/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int cnt=0;
        
        for(int i=0; i<startTime.size(); i++)
        {
            if(startTime[i] <= queryTime && endTime[i] >= queryTime)
                cnt++;
        }
        
        return cnt;
    }
};

class Solution {
public:
    
    int FirstBig(vector<int> v, int t)
    {
        int st=0, end=v.size()-1;
        int mid, res=v.size();
        
        while(st <= end)
        {
            mid=st+(end-st)/2;
            
            if(v[mid] <= t)
                st=mid+1;
            else
            {
                res=mid;
                end=mid-1;
            }
        }
        
        return res;
    }
    
    int FirstBigOREqual(vector<int>& v, int t)
    {
        int st=0, end=v.size()-1;
        int mid, res=v.size();
        
        while(st <= end)
        {
            mid=st+(end-st)/2;
            
            if(v[mid] < t)
                st=mid+1;
            else
            {
                res=mid;
                end=mid-1;
            }
        }
        
        return res;
    }
    
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        sort(startTime.begin(), startTime.end());
        sort(endTime.begin(), endTime.end());
        
        int idx1=FirstBig(startTime, queryTime);
        int idx2=FirstBigOREqual(endTime, queryTime);
        
        return idx1-idx2;
        
    }
};