//https://practice.geeksforgeeks.org/problems/circular-tour-1587115620/1
//https://leetcode.com/problems/gas-station/

#include<bits/stdc++.h>
using namespace std;

struct petrolPump
{
    int petrol;
    int distance;
};


 // } Driver Code Ends
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/

/*You are required to complete this method*/
class Solution{
  public:
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int st=0, end=1, pet=p[0].petrol-p[0].distance;
        
        while(st != end || pet < 0)
        {
            if(pet < 0)
            {
                pet=0;
                if(end <= st)
                    return -1;
                st=end;
            }
            
            pet=pet+(p[end].petrol-p[end].distance);
            end=(end+1)%n;
        }
        
        return st;
    }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        Solution obj;
        cout<<obj.tour(p,n)<<endl;
    }
}
  // } Driver Code Ends