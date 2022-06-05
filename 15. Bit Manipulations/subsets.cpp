//https://www.geeksforgeeks.org/print-subsequences-string-iterative-method/

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
    
    int range=(1<<n)-1;
    for (int i = 0; i <= range; i++)
    {
        int idx=0, no=i;

        while (no > 0)
        {
            if(no & 1)           
            {
                cout<<a[idx]<<" ";             
            }
            idx++;
            no=no>>1;           
        }
        cout<<endl;
    }    

    return 0;
}