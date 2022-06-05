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

/*
If car starts at A and can not reach B. Any station between A and B
can not reach B.(B is the first station that A can not reach.)

If the total number of gas is bigger than the total number of cost. There must be a solution.
*/
  
    //Function to find starting point where the truck can start to get through
    //the complete circle without exhausting its petrol in between.
    int tour(petrolPump p[],int n)
    {
        int start=0, pet=0, total_pet=0, total_dist=0;
        
        for(int i=0; i<n; i++)
        {
            total_pet+=p[i].petrol;
            total_dist+=p[i].distance;
            
            pet=pet+p[i].petrol-p[i].distance;
            
            if(pet < 0)
            {
                start=i+1;
                pet=0;
            }
        }
        
        if(total_pet >= total_dist)
            return start;
        return -1;
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