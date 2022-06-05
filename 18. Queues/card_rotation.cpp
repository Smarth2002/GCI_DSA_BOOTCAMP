//https://practice.geeksforgeeks.org/problems/card-rotation5834/1

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution {
public:    
    vector<int> rotation(int n)
    {
        vector<int> res(n, -1);
        
        int no=1, cnt=0, idx=0;
        
        while(no <= n) //place all no's till n
        {
            cnt=0; //count of no's to leave
            
            while(cnt != no || res[idx] != -1)
            {
                if(res[idx] == -1) //leave only valid existing indices
                {
                    cnt++;
                    idx=(idx+1)%n;
                }
                else //if not valid check next
                    idx=(idx+1)%n;
            }
            
            res[idx]=no; //place current no and move to next
            idx=(idx+1)%n;
            
            no++;
        }
        
        return res;
    }
};

class Solution {
public:    
    vector<int> rotation(int n)
    {
        vector<int> res(n);
        
        queue<int> q;
        
        for(int i=0; i<n; i++) //push all indices of arrangement
            q.push(i);
        
        for(int no=1; no<=n; no++)
        {
            int copy=no;
            
            while(copy--) //loop times = no (if no=2 rotate 2 times...)
            {
                int temp=q.front(); //remove from front and add at rear
                q.pop();
                q.push(temp);
            }
            
            res[q.front()]=no; //place no in vector at current front pos
            q.pop(); //remove pos
        }
        
        return res;
    }
};


// { Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin >> n;
        vector<int > ans;
        ans = obj.rotation(n);
        for(int i:ans)
            cout<< i << " ";
        cout << endl;
        
    }
    return 0;
}
  // } Driver Code Ends