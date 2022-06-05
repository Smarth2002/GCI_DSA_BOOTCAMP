#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*alternative
    int i;
    
    for(i=0; i <= str.size()-k; i++)
    {        
        sort(str.begin()+i, str.begin()+k+i);
    }

    cout<<str;
    */

    string str;
    cin>>str;

    int k;
    cin>>k;

    int i, flag=1;
    
    for(i=0; i <= str.size()-k; i++)
    {        
        if(flag)
            sort(str.begin()+i, str.begin()+i+k);
        
        if(str[k+i] < str[k+i-1])
            flag=1;
        else
            flag=0;
    }

    cout<<str;

    return 0;
}