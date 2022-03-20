//https://leetcode.com/problems/min-stack/

#include<bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s;
    stack<int> ss;
    
    void push(int val) {
        if(s.empty())
        {
            s.push(val);
            ss.push(val);
        }
        else
        {
            s.push(val);
            
            if(val <= ss.top())
                ss.push(val);
        }
        
        return;
    }
    
    void pop() {
        if(s.empty())
            return;
        
        if(s.top() == ss.top())
        {
            s.pop();
            ss.pop();
        }
        else
            s.pop();
    }
    
    int top() {
        if(s.empty())
            return -1;
        return s.top();
    }
    
    int getMin() {
        if(ss.empty())
            return -1;
        return ss.top();
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