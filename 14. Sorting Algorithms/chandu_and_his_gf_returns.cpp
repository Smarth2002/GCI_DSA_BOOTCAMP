//https://www.hackerearth.com/problem/algorithm/chandu-and-his-girlfriend-returns/

#include<bits/stdc++.h>
using namespace std;

void merge(long long int left[], int sizeL, long long int right[], int sizeR, long long int a[])
{
    int i=0, j=0, k=0;

    while (i < sizeL || j < sizeR)
    {
        if(i < sizeL && j < sizeR)
        {
            if(left[i] > right[j])
            {
                a[k]=left[i];
                i++;
            }
            else
            {
                a[k]=right[j];
                j++;
            }
        }
        else if(i < sizeL)
        {
            a[k]=left[i];
            i++;
        }
        else
        {
            a[k]=right[j];
            j++;
        }

        k++;
    }
    
    return;
}


int main()
{
	int t;
    cin>>t;

    while (t--)
    {
        long long int n, m;
        cin>>n>>m;
        
        long long int c[n+m];

        long long int a[n];

        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        long long int b[m];

        for (long long int i = 0; i < m; i++)
        {
            cin>>b[i];
        }

        merge(a, n, b, m, c);

        for (long long int i = 0; i < n+m; i++)
        {
            cout<<c[i]<<" ";
        }
        
        cout<<endl;
    }

	return 0;
}