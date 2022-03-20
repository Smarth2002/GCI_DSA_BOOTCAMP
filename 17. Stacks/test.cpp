#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int start, int end)
{
    if(end-start+1 <= 2)
    {
        return;
    }
    
    int mid=start+(end-start)/2;
    int left=start+(mid-start)/2+1;
    int right=mid+1;

    while (left <= mid)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;

        left++;
        right++;
    }

    for (int i = start; i <= end; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    solve(arr, start, mid);
    solve(arr, mid+1, end);

    return;
}

void shuffle(int arr[], int n)
{
    solve(arr, 0, n-1);
    return;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    shuffle(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}