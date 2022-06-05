//https://www.geeksforgeeks.org/given-an-array-a-and-a-number-x-check-for-pair-in-a-with-sum-as-x/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int sum;
    cin>>sum;

    sort(a, a+n);

    int low=0, high=n-1;

    while(low < high)
    {
        if(a[low] + a[high] < sum)  
            low++;
        else if(a[low] + a[high] < sum)
            high--;
        else
            break;
    }

    if(low < high)
        cout<<"yes";
    else
        cout<<"no";

    return 0;
}