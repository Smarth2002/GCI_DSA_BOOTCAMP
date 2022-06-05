//https://www.hackerearth.com/practice/algorithms/searching/linear-search/practice-problems/algorithm/holiday-season-ab957deb/


#include<bits/stdc++.h>
using namespace std;

int fac(int no)
{
    int ans=1;

    for (int i = 1; i <= no; i++)
    {
        ans*=i;
    }
    
    return ans;
}

int main()
{
    int size;
    cin>>size;

    string str;
    cin>>str;

    int count=0;
    int pos1, pos2;

    int i;
    for ( i = 0; i < size-1; i++)
    {
        if(str[i] != str[i+1])
            break;
    }

    if(i == size-2)
        cout<<fac(size)/(fac(4)*fac(size-4));
    else
    {
        for (int i = 0; i <= size-4; i++)
        {
            for (int j = i+1; j <= size-3; j++)
            {
                pos1=str.find(str[i], j+1);

                while (pos1 != string::npos)
                {
                    pos2=str.find(str[j], pos1+1);

                    while (pos2 != string::npos)
                    {
                        count++;
                        pos2=str.find(str[j], pos2+1);
                    }
                    
                    pos1=str.find(str[i], pos1+1);
                }
                                
            }
            
        }
    }
    
    cout<<count;

    return 0;
}