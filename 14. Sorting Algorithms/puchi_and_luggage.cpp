//https://www.hackerearth.com/problem/algorithm/puchi-and-luggage/

#include<bits/stdc++.h>
using namespace std;

const int MAX=100005;
int wt[MAX];
int copi[MAX];
const int MAX1=1000005;
int freq[MAX1]={};

void merge(int left, int mid, int right)
{
    int i=left, j=mid+1, k=0;
    int temp[right-left+1];
    int count=0;

    while (i <= mid && j <= right)
    {
        if(wt[i] < wt[j])
        {
            temp[k]=wt[i];
            freq[wt[i]]+=count;
            i++;
        }
        else
        {           
            temp[k]=wt[j];
            j++;
            count++;
        }
        
        k++;
    }
    
    while (i <= mid)
    {
        temp[k]=wt[i];
        freq[wt[i]]+=count;
        i++;
        k++;
    }
    while (j <= right)
    {
        temp[k]=wt[j];
        j++;
        k++;
    }
    
    for (int i = left; i <= right; i++)
    {
        wt[i]=temp[i-left];
    }
    
    return;
}

void inversion(int left, int right)
{  
    if(left < right)
    {
        int mid=left+(right-left)/2;

        inversion(left, mid);
        inversion(mid+1, right);

        merge(left, mid, right);
    }

    return;
}

int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            cin>>wt[i];
            copi[i]=wt[i];
        }        
        
        inversion(0, n-1);

        for (int i = 0; i < n; i++)
        {
            cout<<freq[copi[i]]<<" ";
        }
        
        cout<<endl;

        for (int i = 0; i < n; i++)
        {
            freq[copi[i]]=0;
        }
        
    }
    
    return 0;
}