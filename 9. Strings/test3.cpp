#include<bits/stdc++.h>
using namespace std;

int main()
{
    string code[2000]={""};

    int i=0;
    
    for (int i = 0; i < 2000; i++)
    {
        getline(cin, code[i]);

        if(code[i] == "")
            break;
    }
    
    
    for (int i = 0; code[i] != ""; i++) 
    {
        for (int j = 0; j < code[i].size()-1; j++)
        {
            if(code[i][j] == '-' && code[i][j+1] == '>')
            {
                code[i][j]='.';
                code[i].erase(j+1, 1);
            }
            else if(code[i][j] == '/' && code[i][j+1] == '/')
                break;
        }
        
        cout<<code[i]<<endl;
    }
    
    
    return 0;
}