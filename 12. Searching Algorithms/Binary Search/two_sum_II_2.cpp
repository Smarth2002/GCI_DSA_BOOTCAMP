//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) // 2 pointer method
    {
        int start=0, end=numbers.size()-1;
        int mid;
        vector<int> ans;
        
        while(start <= end)
        {
            if(numbers[start] + numbers[end] == target)
            {
                ans.push_back(start+1);
                ans.push_back(end+1);
                return ans;
            }
            else if(numbers[start] + numbers[end] > target)
                end--;
            else
                start++;
        }
        
        return ans;
    }
