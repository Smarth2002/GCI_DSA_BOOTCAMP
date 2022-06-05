//https://practice.geeksforgeeks.org/problems/game-of-death-in-a-circle1840/1

#include<bits/stdc++.h>
using namespace std;

void solve(int n, int k, int index, vector<int>& persons)
{
    if(persons.size() == 1)
    {
        return;
    }

    index=(index+k-1)%persons.size();
    persons.erase(persons.begin()+index);

    solve(n-1, k, index, persons);
}

int safePos(int n, int k)
{
    vector<int> persons;

    for (int i = 1; i <= n; i++)
    {
        persons.push_back(i);
    }

    int index=0;
    
    solve(n, k, index, persons);

    return persons[0];
}

int main()
{
    int n=40, k=7;
    cout<<safePos(n, k);

    return 0;
}