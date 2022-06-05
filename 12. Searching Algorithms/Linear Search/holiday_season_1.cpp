//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/holiday-season-ab957deb/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;

    string str;
    cin>>str;

    int count=0;

    for (int i = 0; i <= size-4; i++)
    {
        for (int j = i+1; j <= size-3; j++)
        {
            for (int k = j+1; k <= size-2; k++)
            {
                for (int l = k+1; l <= size-1; l++)
                {
                    if(str[i] == str[k] && str[j] == str[l])
                        count++;
                }
                
            }
            
        }
        
    }
    
    cout<<count;

    return 0;
}