#include<bits/stdc++.h>
using namespace std;

string solve(long int a, long int b)
{
    if(a % b == 0)
    {
        string str="";
        int no= round(pow(10, a-1));
        str+=to_string(no);

        return str;
    }

    return solve(b, a%b);
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        long int a, b;
        cin>>a>>b;

        string str="";

        if(a % b == 0)
        {
            int no= round(pow(10, a-1));
            str+=to_string(no);
            /*str.push_back('1');

            for (int i = 1; i <= a-1; i++)
            {
                str.push_back('0');
            }  
            */        
        }
        else
        {
            string str1=solve(a, b);

            for (int i = 0; i < a; i++)
            {
                str.push_back(str1[i % (str1.size())]);
            }

            cout<<str<<endl;
        }
        
        //cout<<str.size()<<endl;

        long long int x=1;
        long int res=0;

        for (int i = str.size()-1; i >= 0; i--)
        {
            if(str[i] == '1')
                res=(res+x) % 1000000007;
            x*=2;
        }


        cout<<res <<endl;
    }

    return 0;
}