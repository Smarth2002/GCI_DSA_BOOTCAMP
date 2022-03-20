//https://leetcode.com/problems/min-stack/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<long int> s;
    int minEle;

    void push(long long int val) {
        if(s.empty())
        {
            s.push(val);
            minEle=val;
        }
        else
        {
            if(val >= minEle)
                s.push(val);
            else if(val < minEle)
            {
                s.push(2*val-minEle);
                minEle=val;
            }
        }
        
        return;
    }
    
    void pop() {
        if(s.empty())
            return;
        
        if(s.top() >= minEle)
            s.pop();
        else if(s.top() < minEle)
        {
            minEle=minEle+(minEle-s.top());
            s.pop();
        }
        
        return;
    }
    
    int top() {
        if(s.empty())
            return -1;
        
        if(s.top() >= minEle)
            return s.top();
        else if(s.top() < minEle)
            return minEle;
        return -1;
    }
    
    int getMin() {
        if(s.empty())
            return -1;
        return minEle;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */