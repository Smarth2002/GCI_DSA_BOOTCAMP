//https://practice.geeksforgeeks.org/problems/queue-operations/1

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    
    static const int MAX=1000005;
    int freq[MAX]={};
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
        freq[k]++;
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        return freq[k];
    }
    
};

class Solution{
    public:

    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
        q.push(k);
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
        int freq=0;
        queue<int> temp;
        
        while(!q.empty())
        {
            if(q.front() == k)
                freq++;
            temp.push(q.front());
            q.pop();
        }
        
        q=temp;
        
        if(freq == 0)
            return -1;
        else
            return freq;
    }
    
};