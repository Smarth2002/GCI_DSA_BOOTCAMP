#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;

    int i, j, k, l, ans=0;

    for ( i = 2; i <= str.size(); i++)
    {
        for ( j = 0; j <= str.size()-i; j++)
        {
            char ch=str[j];
            string str2(i, ch);
            string str3=str.substr(j, i);

            if( str3 == str2 )
                ans++;

            else if(i % 2 != 0)
            {
                str2.erase(i/2, 1);
                str3.erase(i/2, 1);

                if(str2 == str3)
                    ans++;
            }

        }        

    }
      
    cout<<ans+str.size();

    return 0;
}