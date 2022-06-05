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
        int pet=0;
        int i=0;
        
        while(i < n)
        {
            int st=i;
            pet=0;
            
            while( st != ((i+n-1)%n) ) //traversing circularly till the prev city
            {
                pet=pet+p[st].petrol-p[st].distance; //petrol left after reaching current city
                
                if(pet < 0) //we cant reach current city as pet left is -ve
                    break;
                
                st=(st+1)%n; //move to next city and check
            }
            
            if( st == ((i+n-1)%n) ) //we reached prev city
            {
                pet=pet+p[st].petrol-p[st].distance;//check if we can reach next city(current)
                
                if(pet >= 0) //if yes then tour complete
                    return i;
                return -1; //no ans exist bcz and cant exist btw indices of start and at end so no index left
            }
            
            if( st+1 > i ) //directly jump to st+1 city bcz no city can be st pt btw starting pt and the pt where condition false
                i=st+1; //but jump only if that idx is forward and not backward bcz backward indices are already checked as we start checkinf from 0
            else
                i++; //else simply move forward...so in both cases we check cities as st pts in forward direction
        }
        
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