//https://leetcode.com/problems/number-of-recent-calls/

#include<bits/stdc++.h>
using namespace std;


class RecentCounter {
public:
    
    int cnt;
    queue<int> req;
    
    RecentCounter() {
        cnt=0;    
    }
    
    int ping(int t) {
        req.push(t);
        
        while(req.front() < t-3000)
            req.pop();
        return req.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */