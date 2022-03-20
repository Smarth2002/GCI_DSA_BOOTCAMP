#include<bits/stdc++.h>
using namespace std;

stack<int> s;
int minEle=INT_MAX;

void push(int a)
{
    s.push(a);
}

int pop()
{
    int ans=s.top();
    s.pop();
    minEle=INT_MAX;
    return ans;
}

int getMin()
{
    if(s.empty())
        return -1;

    int ele=s.top();

    if(ele < minEle)
        minEle=ele;

    s.pop();

    getMin();

    s.push(ele);

    return minEle;
}

int main()
{
    push(18);
    push(19);
    push(29);
    push(15);
    push(16);

    cout<<getMin();
    cout<<endl;

    cout<<pop();
    cout<<endl;
    cout<<pop();
    cout<<endl;
    cout<<getMin();
    cout<<endl;
    cout<<pop();
    cout<<endl;
    cout<<getMin();


    return 0;
}