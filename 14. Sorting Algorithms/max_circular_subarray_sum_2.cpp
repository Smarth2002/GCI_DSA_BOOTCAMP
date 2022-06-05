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

    int sumL=INT_MIN, sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];

        if(sum > sumL)
            sumL=sum;
        if(sum < 0)
            sum=0;
    }
    
    int sumT=0;

    for (int i = 0; i < n; i++)
    {
        sumT+=a[i];
        a[i]*=-1;
    }    
    
    int max=INT_MIN;
    sum=0;

    for (int i = 0; i < n; i++)
    {
        sum+=a[i];

        if(sum > max)
            max=sum;
        if(sum < 0)
            sum=0;
    }
    
    int sumC=sumT+max;

    if(sumL > sumC || sumT == -max)
        cout<<sumL;
    else
        cout<<sumC;
        
    return 0;
}