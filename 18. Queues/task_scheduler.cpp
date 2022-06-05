//https://leetcode.com/problems/task-scheduler/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        int freq[26]={};
        
        for(int i=0; i < tasks.size(); i++)
        {
            freq[tasks[i]-'A']++;
        }
        
        sort(freq, freq+26, greater<int>());
        
        int ans=(freq[0]-1)*(n+1);
        
        for(int i=0; i<26; i++)
        {
            if(freq[i] == freq[0])
                ans++;
        }
        
        if(tasks.size() > ans)
            ans=tasks.size();
        
        return ans;
    }
};