#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    
    int A[size], freq[10]={};
    string str="";

    int ans=0;

    for (int i = 0; i < size; i++)
    {
        cin>>A[i];
        str+=(char) (A[i]+48);
        freq[A[i]]++;
    }

    int distinct=0;
    
    for (int i = 0; i < 10; i++)
    {
        if(freq[i] > 0)
            distinct++;
    }

    string substr="";
    
    for (int i = distinct; i <= size; i++)
    {
        int j=0;

        while(j <= size-i)
        {
            substr=str.substr(j, i);

            int count=0;
            int sub_freq[10]={};

            for (int k = 0; k < substr.size(); k++)
            {
                sub_freq[substr[k]-48]++;                         
            }

            for (int k = 0; k < 10; k++)
            {
                if(sub_freq[k] > 0)
                    count++;
            }
            
            if(count >= distinct)
                ans++;
                       
            j++;
        }

    }

    cout<<ans;

    return 0;
}