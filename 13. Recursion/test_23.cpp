#include<bits/stdc++.h>
using namespace std;

int solve2(string gdc_string_in, int modulo){

int result = 0;

for(int i=0; i<gdc_string_in.length(); i++){

result = (result*2+(gdc_string_in[i]-'0')) % 1000000007;

}

return result;
}

int solve(string str, int mod)
{
    unsigned long long int x=1;
    unsigned long long int res=0;

    for (int i = str.size()-1; i >= 0; i--)
    {
        if(str[i] == '1')
            res=(res+x) % 1000000007;
        x*=2;
    }

    return res;
}

int main()
{
    cout<<solve("1001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001001", 1000000007);
    return 0;
}