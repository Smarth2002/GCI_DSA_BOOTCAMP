//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& numbers, int target) //binary search method
    {
        int start=0, end=numbers.size()-1;
        int mid;
        vector<int> ans;
        
        for(int i = 0; i < numbers.size()-1; i++)
        {
            start=i+1;
            end=numbers.size()-1;
            
            while(start <= end)
            {                           
                mid=start+(end-start)/2;
                
                if(numbers[i] + numbers[mid] == target)
                {
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }
                else if(numbers[i] + numbers[mid] > target)
                    end=mid-1;
                else
                    start=mid+1;
            }
        }
        
        return ans;
    }
