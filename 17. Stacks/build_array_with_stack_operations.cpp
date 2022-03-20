//https://leetcode.com/problems/build-an-array-with-stack-operations/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        
        vector<string> res;
        
        int j=0;
        for(int i=1; i<=n; i++)
        {
            if(j == target.size())
                return res;
            
            res.push_back("Push");
            
            if(i != target[j])
                res.push_back("Pop");
            else
                j++;
        }
        
        return res;
    }
};