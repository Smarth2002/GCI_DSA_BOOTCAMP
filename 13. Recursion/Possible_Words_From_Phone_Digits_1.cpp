//https://practice.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1/

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(int a[], int n, string op, int index, vector<string>& ans)
    {
        if(index == n)
        {
            ans.push_back(op);
            return;
        }
        
        int no=a[index];
        
        switch(no)
        {
            case 2:
            {
                for(char i = 'a'; i <= 'c'; i++)
                {
                    string op1=op;
              
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
                
            case 3:
            {
                for(char i = 'd'; i <= 'f'; i++)
                {
                    string op1=op;
                  
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 4:
            {
                for(char i = 'g'; i <= 'i'; i++)
                {
                    string op1=op;
              
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 5:
            {
                for(char i = 'j'; i <= 'l'; i++)
                {
                    string op1=op;
             
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 6:
            {
                for(char i = 'm'; i <= 'o'; i++)
                {
                    string op1=op;
              
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 7:
            {
                for(char i = 'p'; i <= 's'; i++)
                {
                    string op1=op;
               
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 8:
            {
                for(char i = 't'; i <= 'v'; i++)
                {
                    string op1=op;
        
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
            case 9:
            {
                for(char i = 'w'; i <= 'z'; i++)
                {
                    string op1=op;
                
                    op1.push_back(i);
                    
                    solve(a, n, op1, index+1, ans);
                }
                break;
            }
        }
    }
    
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        vector<string> ans;
        string op="";
        
        solve(a, N, op, 0, ans);
        
        return ans;
    }
};