//https://www.geeksforgeeks.org/maximum-contiguous-circular-sum/

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
    
    int max=INT_MIN, curr_max=0, min=INT_MAX, curr_min=0;

    for (int i = 0; i < n; i++)
    {
        curr_max+=a[i];

        if(curr_max > max)
            max=curr_max;
        if(curr_max < 0)
            curr_max=0;

        curr_min+=a[i];

        if(curr_min < min)
            min=curr_min;
        if(curr_min > 0)
            curr_min=0;
    }

    int sumT=0;    

    for (int i = 0; i < n; i++)    
        sumT+=a[i];

    int sumC=sumT-min;
    
    if(max > sumC || min == sumT)
        cout<<"linear sum: "<<max;
    else
        cout<<"circular sum: "<<sumC;

    return 0;
}