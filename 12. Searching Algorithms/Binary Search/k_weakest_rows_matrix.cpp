//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

#include<bits/stdc++.h>
using namespace std;

vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
{
    vector<int> ans;
    
    vector<int> freq;
    
    const int m=mat.size(), n=mat[0].size();
    
    int i, j, count;
    
    for( i = 0; i < m; i++)
    {
        count=0;
        
        for( j = 0; j < n; j++)
            if(mat[i][j] == 1)
                count++;
            
        freq.push_back(count);
    }
            
    vector<int> sortFreq(freq.begin(), freq.end());
    sort(sortFreq.begin(), sortFreq.end());
    
    for(int i  = 0; i < k; i++)
    {
        for(int j = 0; j < freq.size(); j++)
        {
            if(sortFreq[i] == freq[j])
            {
                ans.push_back(j);
                freq[j]=-1;
                break;
            }
        }
    }
    
    return ans;
}  