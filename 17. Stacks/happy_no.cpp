//https://leetcode.com/problems/happy-number/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        
        int freq[1000]={};
        
        while(n != 1)
        {
            int copi=n, digit;
            n=0;
            while(copi > 0)
            {
                digit=copi%10;
                n+=(digit*digit);
                copi/=10;
            }
            
            if(freq[n] != 0)
                return false;

            freq[n]++;
            
        }
        
        return true;
    }
};

class Solution {
public:
    
    int getNext(int n)
    {
        int res=0;
        int digit;
        
        while(n > 0)
        {
            digit=n%10;
            res+=(digit*digit);
            n/=10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        
        int slow=n, fast=n;
        
        while(slow != 1 && fast != 1)
        {
            slow=getNext(slow);
            fast=getNext(getNext(fast));
            
            
            if(slow == fast && slow != 1)
                return false;
        }
        
        return true;
    }
};