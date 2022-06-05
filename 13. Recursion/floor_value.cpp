//https://www.geeksforgeeks.org/floor-in-a-sorted-array/

#include<bits/stdc++.h>
using namespace std;

int floorSearch(vector<int> & arr, int X, int N)
{
    static int start=0, end=N-1, res=-1;
    int mid;
    
    if(start <= end)
    {
        mid=start+(end-start)/2;
        
        if(arr[mid] == X)
        {
            res= X;
            return X;
        }
        else if(arr[mid] > X)
        {
            end=mid-1;
        }
        else
        {
            res=arr[mid];
            start=mid+1;
        }
    }
    else
    	return res;
    
    return floorSearch(arr, X, N);
}

int main()
{
    vector<int> a{4,8,9,11};
    cout<<floorSearch(a, 3, 4);

    return 0;
}