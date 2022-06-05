#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<int> a(n);

        int pos=0, neg=0;

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];

            if(a[i] == 1)
                pos++;
            else
                neg++;
        }

        if(n % 2 == 0)
        {
            if(abs(pos-neg) <= 2)
                cout<<"yes";
            else
                cout<<"no";
        }
        else
        {
            if(abs(pos-neg) == 1)
                cout<<"yes";
            else
                cout<<"no";
        }

        cout<<endl;
    }
    
    return 0;
}