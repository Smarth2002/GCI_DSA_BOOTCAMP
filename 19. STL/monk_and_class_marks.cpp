//https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
using namespace std;

/*
bool comp(pair<int, string> a, pair<int, string> b) 
{
    if(a.first > b.first)
        return true;
    else if(a.first == b.first)
    {
        if(a.second <= b.second)
            return true;
    }
    return false;
}


int main() {

	vector< pair<int, string> > ms;

    int n;
    cin>>n;

    while (n--)
    {
        int marks;
        string name;
        
        cin>>name>>marks;

        ms.push_back({marks, name});
    }
    
    sort(ms.begin(), ms.end(), comp);

    for(auto it: ms)
    {
        cout<<it.second<<" "<<it.first<<endl;
    }

    return 0;
}
*/
//ALTERNATIVE

int main()
{
    map< int, multiset<string> > mp;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int marks;
        string name;

        cin>>name>>marks;

        mp[marks].insert(name);
    }
    
    for (auto i = mp.rbegin(); i != mp.rend(); i++)
    {
        int marks=i->first; //(*i).first
        auto &list=i->second;

        for(auto it: list)
            cout<<it<<" "<<marks<<endl;
    }

    return 0;   
}
    