//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbEs5YWpRYzk0UHRTR2VYYnc1WGRCYlhFUTdlZ3xBQ3Jtc0tta2pRZS01bmppS0I2VDZTd1VpZGNONGstRkdlbzBXWXNrdU51LXhEWl9Kenl5MDBGRERKdjVvejdxLVZQVXBlTnY3aW1nSk56cm5EbmYxcmJFeEhtaDV0VHVnczRvS1UtMFVCM3J3Y1NMVmpqTzExOA&q=https%3A%2F%2Fleetcode.com%2Fproblems%2Fletter-case-permutation%2F

#include<bits/stdc++.h>
using namespace std;

vector<string> permutations(string ip, string op, vector<string>& ans)
{
    if(ip == "")
    {
        ans.push_back(op);
        return ans;
    }

    if(ip[0] >= '0' && ip[0] <= '9')
    {
        string op1=op;
        op1.push_back(ip[0]);

        ip.erase(ip.begin()+0);

        permutations(ip, op1, ans);

        return ans;
    }

    string op2=op;
    string op3=op;

    op2.push_back(tolower(ip[0]));
    op3.push_back(toupper(ip[0]));

    ip.erase(ip.begin()+0);

    permutations(ip, op2, ans);
    permutations(ip, op3, ans);

    return ans;
}

int main()
{
    string ip="a1B2";
    string op="";

    vector<string> ans;

    ans=permutations(ip, op, ans);

    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<endl;
    }
    

    return 0;
}